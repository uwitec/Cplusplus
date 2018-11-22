#include <iostream>
#include "Node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList
{
	
public:
	Node* head;
	Node* tail;
	LinkedList();
	void add(int);
	void swap(Node*, Node*);
	void print();

	
};
#endif

