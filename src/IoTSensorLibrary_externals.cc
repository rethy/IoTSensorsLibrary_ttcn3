///////////////////////////////////////////////////////////////////////
// Copyright (c) 2000-2018 Ericsson Telecom AB
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v1.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v10.html
//
// Contributors:
// 	  Gyorgy Rethy
// version R1A
////////////////////////////////////////////////////////////////////////
// Module containing external function implementations for the IoT Library
////////////////////////////////////////////////////////////////////////

#include <TTCN3.hh>
#include <math.h>
#include "IoTSensorLibrary_Common.hh"

namespace IoTSensorLibrary__Common {
  //////////////////////////////////////////////////////////////////////
  //
  // Returns the square root of a float
  //
  //////////////////////////////////////////////////////////////////////
  FLOAT fx__sqrt(const FLOAT& val){
    return FLOAT(pow((double)val,0.5));
  }
}
