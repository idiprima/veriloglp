#ifndef LISTND_H_
#define LISTND_H_

template< class NODETYPE > class list;

template< class NODETYPE >
class list_node {
	friend class list<NODETYPE>;
public:
	list_node (const NODETYPE &);
	NODETYPE get_data()const;
private:
	NODETYPE data;
	list_node<NODETYPE> *next_ptr;
};

#endif /*LISTND_H_*/
