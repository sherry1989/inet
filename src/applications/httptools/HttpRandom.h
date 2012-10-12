// ***************************************************************************
//
// HttpTools Project
//
// This file is a part of the HttpTools project. The project was created at
// Reykjavik University, the Laboratory for Dependable Secure Systems (LDSS).
// Its purpose is to create a set of OMNeT++ components to simulate browsing
// behaviour in a high-fidelity manner along with a highly configurable
// Web server component.
//
// Maintainer: Kristjan V. Jonsson (LDSS) kristjanvj@gmail.com
// Project home page: code.google.com/p/omnet-httptools
//
// ***************************************************************************
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License version 3
// as published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
// ***************************************************************************

#ifndef __INET_HTTPRANDOM_H
#define __INET_HTTPRANDOM_H

#include <exception>
#include <string>

#include "INETDefs.h"

#include "HttpUtils.h"

//--modified by wangqian, 2012-06-15
/*
 * add lognormal and pareto distribution
 */
enum DISTR_TYPE {dt_normal, dt_uniform, dt_exponential, dt_histogram, dt_constant, dt_zipf, dt_lognormal, dt_pareto};

// Defines for the distribution names
#define DISTR_NORMAL_STR "normal"
#define DISTR_UNIFORM_STR "uniform"
#define DISTR_EXPONENTIAL_STR "exponential"
#define DISTR_HISTOGRAM_STR "histogram"
#define DISTR_CONSTANT_STR "constant"
#define DISTR_ZIPF_STR "zipf"
#define DISTR_LOGNORMAL_STR "lognormal"
#define DISTR_PARETO_STR "pareto"
//--modified end

/**
 * Base random object. Should not be instantiated directly.
 */
class rdObject
{
    public:
        virtual ~rdObject(){}
    protected:
        DISTR_TYPE m_type;
    public:
        /** Returns a random number. Must be implemented in derived classes. */
        virtual double draw() = 0;
    public:
        DISTR_TYPE getType() {return m_type;}
        std::string typeStr();
        virtual std::string toString() {return typeStr();}
    protected:
        bool _hasKey(cXMLAttributeMap attributes, std::string key) {return attributes.find(key)!=attributes.end();}
};

/**
 * Normal distribution random object.
 * Wraps the OMNeT++ normal distribution function but adds a minimum limit.
 */
class rdNormal : public rdObject
{
    protected:
        double m_mean;          ///< The mean of the distribution.
        double m_sd;            ///< The sd of the distribution.
        double m_min;           ///< The minimum limit   .
        bool m_bMinLimit;       ///< Set if the minimum limit is set.
        bool m_nonNegative;     ///< Non-negative only -- uses the truncnormal function.
    public:
        /** Constructor for direct initialization */
        rdNormal(double mean, double sd, bool nonNegative = false);
        /** Constructor for initialization with an XML element */
        rdNormal(cXMLAttributeMap attributes);
        /** Set the min limit for the random values */
        void setMinLimit(double min) {m_min = min; m_bMinLimit = true;}
        /** Cancel the min limit when not needed any more */
        void resetMinLimit() {m_bMinLimit = false;}
        /** Get a random value */
        virtual double draw();
};

/**
 * Uniform distribution random object.
 * Wraps the OMNeT++ uniform distribution function.
 */
class rdUniform : public rdObject
{
    protected:
        double m_beginning; ///< Low limit
        double m_end;       ///< High limit
    public:
        /** Constructor for direct initialization */
        rdUniform(double beginning, double end);
        /** Constructor for initialization with an XML element */
        rdUniform(cXMLAttributeMap attributes);
        /** Get a random value */
        virtual double draw();
        // Getters and setters
        double getBeginning() {return m_beginning;}
        void setBeginning(double beginning) {m_beginning = beginning;}
        double getEnd() {return m_end;}
        void setEnd(double end) {m_end = end;}
};

/**
 * Exponential distribution random object.
 * Wraps the OMNeT++ exponential distribution function, but adds min and max limits.
 */
class rdExponential : public rdObject
{
    protected:
        double m_mean;      ///< The distribution mean
        double m_min;       ///< The low limit
        double m_max;       ///< The high limit
        bool m_bMinLimit;
        bool m_bMaxLimit;
    public:
        /** Constructor for direct initialization */
        rdExponential(double mean);
        /** Constructor for initialization with an XML element */
        rdExponential(cXMLAttributeMap attributes);
        /** Get a random value */
        virtual double draw();
        // Getters and setters
        void setMinLimit(double min) {m_min = min; m_bMinLimit = true;}
        void resetMinLimit() {m_bMinLimit = false;}
        void setMaxLimit(double max) {m_max = max; m_bMaxLimit = true;}
        void resetMaxLimit() {m_bMaxLimit = false;}
};

/**
 * Histogram distribution random object.
 */
class rdHistogram : public rdObject
{
    protected:
        struct rdHistogramBin
        {
            int count;
            double sum;
        };

        typedef std::vector<rdHistogramBin> rdHistogramBins;

    protected:
        rdHistogramBins m_bins;
        bool m_zeroBased;
    public:
        /** Constructor for direct initialization */
        rdHistogram(rdHistogramBins bins, bool zeroBased = false);
        /** Constructor for initialization with an XML element */
        rdHistogram(cXMLAttributeMap attributes);
        /** Get a random value */
        double draw();
    private:
        void __parseBinString(std::string binstr);
        void __normalizeBins();
};

/**
 * Constant distribution random object.
 * Not really a random object, but used to allow constants to be assigned in stead of random distributions
 * when initializing parameters.
 */
class rdConstant : public rdObject
{
    protected:
        double m_value; ///< The constant
    public:
        /** Constructor for direct initialization */
        rdConstant(double value);
        /** Constructor for initialization with an XML element */
        rdConstant(cXMLAttributeMap attributes);
        /** Get a random value */
        double draw();
};

/**
 * Zipf distribution random object.
 * Returns a random value from a zipf distribution (1/n^a), where a is the constant alpha and n is a order of popularity.
 * See more details on http://en.wikipedia.org/wiki/Zipf.
 */
class rdZipf : public rdObject
{
    protected:
        double m_alpha;     ///< The alpha value
        int m_number;       ///< The number of nodes to pick from
        double m_c;         ///< Helper constant.
        bool m_baseZero;    ///< True if we want a zero-based return value
    public:
        /** Constructor for direct initialization */
        rdZipf(int n, double alpha, bool baseZero = false);
        /** Constructor for initialization with an XML element */
        rdZipf(cXMLAttributeMap attributes);
    public:
        /** Get a random value -- a element in the pick order (popularity order) */
        virtual double draw();
        /** Return the object definition as a string */
        virtual std::string toString();
        // Getters and setters
        void setN(int n) {m_number = n; __setup_c();}
        int getN() {return m_number;}
        void setAlpha(double alpha) {m_alpha = alpha; __setup_c();}
        double getAlpha() {return m_alpha;}
    private:
        // Initialization methods.
        void __initialize(int n, double alpha, bool baseZero);
        void __setup_c();
};


//--added by wangqian, 2012-06-15
/**
 * LogNormal distribution random object.
 * Wraps the OMNeT++ lognormal distribution function but adds a minimum limit.
 */
class rdLogNormal : public rdObject
{
    protected:
        double m_mean;          ///< The mean of the distribution.
        double m_sd;             ///< The sd of the distribution.
        double m_min;           ///< The minimum limit   .
        double m_max;          ///< The high limit
        bool m_bMinLimit;
        bool m_bMaxLimit;
    public:
        /** Constructor for direct initialization */
        rdLogNormal(double mean, double sd);
        /** Constructor for initialization with an XML element */
        rdLogNormal(cXMLAttributeMap attributes);
        /** Set the min limit for the random values */
        void setMinLimit(double min) {m_min = min; m_bMinLimit = true;}
        /** Cancel the min limit when not needed any more */
        void resetMinLimit() {m_bMinLimit = false;}
        void setMaxLimit(double max) {m_max = max; m_bMaxLimit = true;}
        void resetMaxLimit() {m_bMaxLimit = false;}
        /** Get a random value */
        virtual double draw();
};

/**
 * Pareto distribution random object.
 * Wraps the OMNeT++ pareto distribution function, but adds min and max limits.
 */
class rdPareto : public rdObject
{
    protected:
        double m_a;      ///< The parameter a
        double m_b;      ///< The parameter b
        double m_c;      ///< The shift c
        double m_min;       ///< The low limit
        double m_max;       ///< The high limit
        bool m_bMinLimit;
        bool m_bMaxLimit;
    public:
        /** Constructor for direct initialization */
        rdPareto(double a, double b, double c);
        /** Constructor for initialization with an XML element */
        rdPareto(cXMLAttributeMap attributes);
        /** Get a random value */
        virtual double draw();
        // Getters and setters
        void setMinLimit(double min) {m_min = min; m_bMinLimit = true;}
        void resetMinLimit() {m_bMinLimit = false;}
        void setMaxLimit(double max) {m_max = max; m_bMaxLimit = true;}
        void resetMaxLimit() {m_bMaxLimit = false;}
};
//--added end

/**
 * A factory class used to construct random distribution objects based on XML elements.
 * The type name is used to instantiate the appropriate rdObject-derived class.
 */
class rdObjectFactory
{
    public:
        /** Return a rdObject-derived class based on the type name in the XML element */
        rdObject* create(cXMLAttributeMap attributes);
};

#endif
