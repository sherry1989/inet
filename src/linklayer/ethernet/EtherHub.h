/*
 * Copyright (C) 2003 Andras Varga; CTIE, Monash University, Australia
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __INET_ETHERHUB_H
#define __INET_ETHERHUB_H

#include "INETDefs.h"

/**
 * Models a wiring hub. It simply broadcasts the received message
 * on all other ports.
 */
class INET_API EtherHub : public cSimpleModule, protected cListener
{
  protected:
    int numPorts;         // sizeof(ethg)
    int inputGateBaseId;  // gate id of ethg$i[0]
    int outputGateBaseId; // gate id of ethg$o[0]

    // statistics
    long numMessages;   // number of messages handled
    static simsignal_t pkSignal;

  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();
    virtual void receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj);

    virtual void checkConnections();
};

#endif


