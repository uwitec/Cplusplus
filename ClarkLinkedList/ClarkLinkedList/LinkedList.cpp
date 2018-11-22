#include <iostream>
#include "LinkedList.h"
using namespace std; 


LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

void  LinkedList::add(int number)
{
	Node* newNode = new Node(number);
	Node* curr = head;
	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		while (curr->getNext() != nullptr)
		{
			curr = curr->getNext();
		}
		curr->setNext(newNode);
		tail = curr->getNext();
	}
}
void LinkedList::print()
{
	Node* curr = head;

	while (curr != nullptr)
	{
		cout << curr->getData() << "->";
		curr = curr->getNext();
		
	}
	cout << "null" << endl;
}



