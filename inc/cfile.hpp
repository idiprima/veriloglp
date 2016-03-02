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
    void set_name(std::string n) { name = n; };
    void set_name(char & n) { name = n; };
    std::string get_name() const {return name;};
    std::string get_path() const {return path;};
    bool exist() const;
    size_t get_size();
};
