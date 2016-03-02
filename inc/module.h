#ifndef MODULE_H_
#define MODULE_H_

#include <stdlib.h>
#include <iostream>
#include <deque>
#include <limits.h>
#include "ports.h"

using namespace std;

class vmodule
{
private:
	char *file_name;
	char *design_path;
	char *module_name;
	char *parent_name;
	deque<vports> inputs;
	deque<vports> outputs;

public:
	vmodule();
	~vmodule();
	char *set_file_name(char *name);// {return strcpy(file_name, name);}
	char *set_design_path(char *path);
	char *set_module_name(char *name);
	char *set_parent_name(char *name);

};

#endif /*MODULE_H_*/
