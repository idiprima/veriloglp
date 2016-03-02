#ifndef LIST_H_
#define LIST_H_

#include "listnd.h"

template <class NODETYPE>
class list{
public:
	list();
	~list();
	void push_front(const NODETYPE &);
	void push_back(const NODETYPE &);
	bool pop_front(NODETYPE &);
	bool pop_back(NODETYPE &);
	bool is_empty() const;
	void print() const;
	list_node<NODETYPE>* find(const NODETYPE &);
private:
	int count_nodes;
	list_node<NODETYPE>* get_new_node(const NODETYPE &);
	list_node<NODETYPE>* first_ptr;
	list_node<NODETYPE>* last_ptr;
};

#endif /*LIST_H_*/
