/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the list header which cotains the interface for the list class. The list class identifies the head and the tail of the
 * doubly linked list. It has the functions addNode, printList, swap, sortAscending, sortDescending, and search.
 *
 */

#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <iostream>
using namespace std;


class List
{
private:
	Node *head; // assigns the node as the head of the doubly linked list
	Node *tail; // assigns the node as the tail of the doubly linked list
public:
	List();
	List(const List &copyList);
	void add(string word); // adds a node to the linked list with a student object in the node
	void printList(); // prints the linked list
	void printReverseIterative();
	void printReverseRecursive(Node *current);
	Node *getHead();
	int getCount(); // counts the elements in the linked list
};
#endif

