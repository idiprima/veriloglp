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

#include "cfile.hpp"

int main(int argc, const char *argv[]) {

    if(argc != 2){
        std::cout << "wrong number of arguments." << std::endl;
        return EXIT_SUCCESS;
    }

    cfile vfile;
    vfile.set_name(argv[1]);

    std::cout << vfile.get_name() << std::endl << 
    (vfile.exist() ? vfile.get_size() : 0) << std::endl;
    return EXIT_SUCCESS;
}
