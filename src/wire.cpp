//============================================================================
// Name        : wire.cpp
// Author      : Ivan
// Version     :
// Copyright   : GPL
// Description : 
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wire.h"

//============================================================================
// Name        : 
// Description : 
//============================================================================



void vwire::setname(char * nm)
{
	name = new char[sizeof(char) * strlen(nm)];
	strncpy(name, nm, strlen(nm)); 	
}
