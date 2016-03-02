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

//============================================================================
// Name        : 
// Description : 
//============================================================================
class cfile
{
private:
    std::string name;
    std::string path;
public:
    cfile();
    cfile(std::string n) { name = n; };
    cfile( const cfile &);
    //~cfile();
    const cfile &operator=(const cfile &);
    std::string operator=(const char *);
    void set_name(std::string n) { name = n; };
    std::string get_name() const {return name;};
    std::string get_path() const {return path;};
    size_t get_size();
};
