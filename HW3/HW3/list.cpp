/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the list class that creates the doubly linked list. The functions allow the user to add a node, print the list, sort the list
 * in ascending and descending order, and to search the list for a specific student id.
 *
 * sortAscending - Bubble sort - O(n^2)
 * sortDescending - Bubble sort - O(n^2)
 * search - List traversal - O(n)
 *
 *
 */
#include <iostream>
#include <string>
#include "list.h"
#include "node.h"

using namespace std;

List::List() //Constructor that sets the head and tail to null
{
	head = NULL;
	tail = NULL;
}
List::List(const List &original)
{
	string word = original.head->getWord();
	Node *copy = new Node(word);
	Node *current = original.head;
	head = copy;
	while (current->getNext() != NULL)
	{
		current = current->getNext();
		add(current->getWord());
	}
	current = tail;
}

void List::add(string word) // Functions that adds a node to the linked list. If the lnked list is empty, the node is set to the head and tail.
{
	Node *newNode = new Node(word); // Creates a dynamically allocated memory with a node variable

	if (head != NULL) // This means that there is an existing list already made
	{
		Node* current = head; // Initializes a node pointer named current to the head
		while (current->getNext() != NULL) // checks if the next node is not null (looks for the end of the linked list)
		{
			current = current->getNext(); // traverses the next node
		}
		current->setNext(newNode); //Once at the end of the list, this sets the current pointer to newNode
		tail = newNode; // sets the tail to a new node

	}
	else // else statemet which tells us that the list is empty
	{
		head = newNode; //sets the head to a new node
		tail = newNode; //sets the tail to the new node
	}
	newNode = NULL;  // sets the new node to null
	delete newNode; // deletes the allocated memory

}

void List::printList() // Prints a list of the elements of the linked list
{
	Node *current = head; // Initializes the current pointer and sets it to the head
	while (current != NULL) // checks if the current pointer is not null
	{
		cout << current->getWord() << endl; // prints the contents of the object student
		current = current->getNext(); // moves current to the next node
	}
}

void List::printReverseIterative()
{
	Node *current = head; // Initializes the current pointer and sets it to the head
	Node *temp = head;
	
	for (int i = 0; i < getCount(); i++) {
		for (int j = 0; j < getCount() - 1 - i; j++)
		{
			current = current->getNext();
		}
		cout << current->getWord() << endl;
		current = head;
	}
}

void List::printReverseRecursive(Node *current)
{
	if (current != NULL)
	{
		printReverseRecursive(current->getNext());
		cout << current->getWord() << endl;
	}
	
}
Node* List::getHead()
{
	return head;
}

int List::getCount() // creates a method getCount that counts the elements in the linked list
{
	int counter = 0; // Initialize count and set it to 0;
	Node *current = head; // Initializes a current pointer and sets it to the list's head
	while (current != NULL)  //while the current pointer is not null
	{
		counter++; // add 1 to the counter
		current = current->getNext(); // moves the current to the next node

	}

	return counter; // returns the counter
}
