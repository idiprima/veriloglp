#ifndef PORTS_H_
#define PORTS_H_

#include "string.h"
#include "defs.h"

class vports
{
private:
	char module_name[MAX_MODULE];
	char port_name[MAX_PORT];
	//char *next;
public:
	vports();
    //~vports();
	char* set_module(char * name){return strncpy(module_name, name, MAX_MODULE);}
	char *set_name(char * name) {return strncpy(port_name, name, MAX_PORT);}
	char *get_module();
	char *get_name();
};


#endif /*PORTS_H_*/
