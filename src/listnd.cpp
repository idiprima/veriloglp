//============================================================================
// Name        : 
// Author      : Ivan
// Version     :
// Copyright   : GPL
// Description : Hello World in C, Ansi-style
//============================================================================

#include "listnd.h"


// Constructor
template<class NODETYPE>
list_node<NODETYPE>::list_node(const NODETYPE &info)
		:data(info), next_ptr(0){}

//getdata
template < class NODETYPE>
NODETYPE list_node<NODETYPE>::get_data()const{return data;}
