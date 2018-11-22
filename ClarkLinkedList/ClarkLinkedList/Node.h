#include <iostream>
#ifndef NODE_H
#define NODE_H
using namespace std;


class Node
{
private:
	int data;
	Node* next;
public:
	Node(int data);
	Node* getNext();
	void setNext(Node*);
	void setData(int);
	int getData();
};
#endif

