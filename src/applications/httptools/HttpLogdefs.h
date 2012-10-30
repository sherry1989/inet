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

#ifndef __INET_HTTPLOGDEFS_H
#define __INET_HTTPLOGDEFS_H

#define LL_NONE 0
#define LL_INFO 1
#define LL_DEBUG 2

//--modified by wangqian, 2012-05-29
/*
 * add simTime
 * add file path and line number --added by wangqian, 2012-10-30
 */
#define EV_DEBUG EV << simTime() << "; " << getFullPath() << "; " << __FILE__<< "; " << __LINE__ << "; #DEBUG#    : ;"
#define EV_INFO EV << simTime() << "; " << getFullPath() << "; " << __FILE__<< "; " << __LINE__ << "; #INFO#     : ;"
#define EV_WARNING EV << simTime() << "; " << getFullPath() << "; " << __FILE__<< "; " << __LINE__ << "; #WARNING#  : ;"
#define EV_ERROR EV << simTime() << "; " << getFullPath() << "; " << __FILE__<< "; " << __LINE__ << "; #ERROR#    : ;"
#define EV_SUMMARY EV << simTime() << "; " << getFullPath() << "; " << __FILE__<< "; " << __LINE__ << "; #SUMMARY#    : ;"
//--modified end

#endif
