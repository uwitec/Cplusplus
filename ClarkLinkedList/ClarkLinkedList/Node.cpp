#include <iostream>
#include "Node.h"
using namespace std;


Node::Node(int newData)
{
	data = newData;
	next = nullptr;
}
Node* Node::getNext()
{
	return next;
}
void Node::setNext(Node * data)
{
	next = data;
}
void Node::setData(int newData)
{
	data = newData;
}
int Node::getData()
{
	return data;
}


