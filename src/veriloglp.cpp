//============================================================================
// Name        : veriloglp.cpp
// Author      : Ivan Di Prima
// Version     :
// Copyright   : GPL
// Description :
//============================================================================

#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "cfile.h"

int main(int argc, const char *argv[]) {
    std::string filename;

    if(argc != 2){
            std::cout << "wrong number of arguments." << std::endl;
            return EXIT_SUCCESS;
    }

    filename = argv[1];

    cfile cfilename;
    cfilename = argv[1];
    
    std::cout << cfilename.get_name() << cfilename.get_size() << std::endl;
    return EXIT_SUCCESS;
}
