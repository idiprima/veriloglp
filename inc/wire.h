#ifndef WIRE_H_
#define WIRE_H_


class vwire
{
private:
	char* module;
	char* name;
	int   width;
public:
void setwidth(int x){width = x;}
void setname(char*);
int  getwidth(){return width;}
char* getname(){return name;}
};


#endif /*WIRE_H_*/
