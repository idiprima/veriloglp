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

#include "cfile.hpp"

//============================================================================
// Name        : 
// Description : 
//============================================================================

cfile::cfile()
{
    name = "";
    path = "";
}
bool cfile::exist() const
{
    struct stat stat_buf;
    return (stat(name.c_str(), &stat_buf) == 0); 
}

size_t cfile::get_size()
{
    struct stat stat_buf;
    int rc;

    rc = stat(name.c_str(), &stat_buf);
    return rc == 0 ? stat_buf.st_size : -1;
}

const cfile& cfile::operator=(const cfile &right)
{
    name = right.name;
    path = right.path;
    return * this;
}
