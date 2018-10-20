/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * Node class that defines the node functions in node.h. The functions in this class are used to define the nodes used for the linked list.
 *
 *
 */

#include <iostream>
#include "node.h"

using namespace std;


Node::Node(string word) // Node that takes a Student object pointer parameter
{
	this->word = word; //sets the student pointer to obj parameter
	next = NULL; // sets the next node pointer to null
}

Node* Node::getNext() // gets the pointer to the next node
{
	return next;
}

string Node::getWord()  // returns the student's id name
{
	return word;
}

void Node::setNext(Node *nextNode) // sets the next node to a node parameter
{
	next = nextNode;
}

Node::~Node()  //destructor
{
}
