//============================================================================
// Name        : 
// Author      : Ivan
// Version     :
// Copyright   : GPL
// Description : Hello World in C, Ansi-style
//============================================================================
#include <assert.h>
#include "list.h"


//counstructor
template<class NODETYPE>
list<NODETYPE>::list():first_ptr(0), last_ptr(0){}

//destructor
template<class NODETYPE>
list<NODETYPE>::~list()
{
	if(!is_empty())
	{
#ifdef IS_DEBUG
		cout << "Destroying nodes...\n";
#endif		
		list_node<NODETYPE> *curr_ptr = first_ptr, *tmp_ptr;
		
		while(curr_ptr != 0)
		{
			tmp_ptr = curr_ptr;
#ifdef IS_DEBUG
			cout << tmp_ptr->data << endl;
#endif
			curr_ptr = curr_ptr->next_ptr;
			delete tmp_ptr;
		}
	}
}

//push_front
template<class NODETYPE>
void list<NODETYPE>::push_front(const NODETYPE &value)
{
	list_node<NODETYPE> *new_ptr = get_new_node(value);
	
	if(is_empty()){
		first_ptr = last_ptr = new_ptr;
	} else {
		new_ptr->next_ptr = first_ptr;
		first_ptr = new_ptr;
	}
}

//push_back
template<class NODETYPE>
void list<NODETYPE>::push_back(const NODETYPE &value)
{
	list_node<NODETYPE> *new_ptr = get_new_node(value);
	
	if(is_empty()){
		first_ptr = last_ptr = new_ptr;
	} else {
		last_ptr->next_ptr = new_ptr;
		last_ptr = new_ptr;
	}
}


//pop_front
template<class NODETYPE>
bool list<NODETYPE>::pop_front(NODETYPE &value)
{
	if(is_empty()){
		return false;
	} else {
		list_node<NODETYPE> *temp_ptr = first_ptr;
		
		if( first_ptr == last_ptr )
			first_ptr = last_ptr  = 0;
		else
			first_ptr = first_ptr->next_ptr;
		
		value = temp_ptr->data;
		delete temp_ptr;
		return true;
	}
}


//pop_back
template<class NODETYPE>
bool list<NODETYPE>::pop_back(NODETYPE &value)
{
	if(is_empty()){
		return false;
	} else {
		list_node<NODETYPE> *temp_ptr = last_ptr;
		
		if( first_ptr == last_ptr )
			first_ptr = last_ptr  = 0;
		else{
			list_node<NODETYPE> *curr_ptr = first_ptr;
		
		while(curr_ptr->next_ptr != last_ptr)
			curr_ptr = curr_ptr->next_ptr;
		
		last_ptr = curr_ptr;
		curr_ptr->next_ptr = 0;
		
		}
		
		value = temp_ptr->data;
		delete temp_ptr;
		return true;
	}
}

template<class NODETYPE>
bool list<NODETYPE>::is_empty() const {return first_ptr == 0;}

template<class NODETYPE>
list_node<NODETYPE>* list<NODETYPE>::get_new_node(const NODETYPE &value)
{
	list_node<NODETYPE> *ptr = new list_node<NODETYPE>(value);
	assert(ptr != 0);
	return ptr;
}

