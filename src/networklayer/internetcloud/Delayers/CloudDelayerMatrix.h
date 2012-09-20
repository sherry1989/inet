//
// Copyright (C) 2012 OpenSim Ltd
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//
// @author Zoltan Bojthe
//

#ifndef __INET_INTERNETCLOUD_CLOUDDELAYERMATRIX_H
#define __INET_INTERNETCLOUD_CLOUDDELAYERMATRIX_H


#include "INETDefs.h"

#include "CloudDelayerBase.h"

// Foreign classes:
class IInterfaceTable;
namespace inet { class PatternMatcher; }


class INET_API CloudDelayerMatrix : public CloudDelayerBase
{
  protected:
    //FIXME The 'Matcher' class copied from IPv4NetworkConfigurator
    class Matcher
    {
      private:
        bool matchesany;
        std::vector<inet::PatternMatcher *> matchers; // TODO replace with a MatchExpression once it becomes available in OMNeT++
      public:
        Matcher(const char *pattern);
        ~Matcher();
        bool matches(const char *s);
        bool matchesAny() { return matchesany; }
    };

    class MatrixEntry
    {
      public:
        Matcher srcMatcher;
        Matcher destMatcher;
        bool symmetric;
        cDynamicExpression delayPar;
        cDynamicExpression dataratePar;
        cDynamicExpression dropPar;
        cXMLElement *entity;
      public:
        MatrixEntry(cXMLElement *trafficEntity, bool defaultSymmetric);
        ~MatrixEntry() {}
        bool matches(const char *src, const char *dest);
    };

    class Descriptor
    {
      public:
        cDynamicExpression *delayPar;    // TODO hasznalhatom ugyanazt az expression-t a kulonbozo kapcsolatokhoz???
        cDynamicExpression *dataratePar;    // TODO hasznalhatom ugyanazt az expression-t a kulonbozo kapcsolatokhoz???
        cDynamicExpression *dropPar;
        simtime_t lastSent;
      public:
        Descriptor() : delayPar(NULL), dataratePar(NULL), dropPar(NULL), lastSent(SIMTIME_ZERO) {}
    };

    typedef std::pair<int,int> IDPair;
    typedef std::map<IDPair,Descriptor> IDPairToDescriptorMap;
    typedef std::vector<MatrixEntry*> MatrixEntryPtrVector;

    MatrixEntryPtrVector matrixEntries;
    IDPairToDescriptorMap idPairToDescriptorMap;

    IInterfaceTable *ift;
    cModule *host;

  protected:
    ~CloudDelayerMatrix();
    virtual void initialize();

    /**
     * returns isDrop and delay for this msg
     */
    virtual void calculateDropAndDelay(const cMessage *msg, int srcID, int destID, bool& isDrop, simtime_t& delay);

    CloudDelayerMatrix::Descriptor* getOrCreateDescriptor(int srcID, int destID);

    /// returns path of connected node for the interface specified by 'id'
    std::string getPathOfConnectedNodeOnIfaceID(int id);
};


#endif  // __INET_INTERNETCLOUD_CLOUDDELAYERMATRIX_H

