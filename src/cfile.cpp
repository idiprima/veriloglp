//============================================================================
// Name        : utils.cpp
// Author      : Ivan
// Version     :
// Copyright   : GPL
// Description : 
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
#include <sys/stat.h>

#include "cfile.h"

//============================================================================
// Name        : 
// Description : 
//============================================================================

cfile::cfile()
{
    name = "";
    path = "";
}

size_t cfile::get_size()
{
struct stat stat_buf;
int rc;

    rc = stat(name.c_str(), &stat_buf);
    return rc == 0 ? stat_buf.st_size : -1;
}

std::string cfile::operator=(const char *ch)
{
    name = ch;
    return name;
}


const cfile& cfile::operator=(const cfile &right)
{
    name = right.name;
    path = right.path;
    return *this;
}
