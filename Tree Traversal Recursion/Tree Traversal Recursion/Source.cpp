#include <iostream>
using namespace std;
template<class T>
class Node
{
public:
	int data;
	Node *left;
	Node *right;
};
template <class T>
class MyTree
{
public:
	Node <T> *root;

	Node <T> *traverse()
	{
		printNodes(this->root);
		//Assume this holds data shown in slide 13

		// This will print: 2, 7, 2, 6, 5, 11, 5, 9, 4
	}

	Node <T> *printNodes(Node<T> * x)
	{
		// Prints out what is in the root
		cout << x->data << endl;
		//print nodes in left
		if (x->left != nullptr)
		{
			printNodes(x->left);
		}
		//print nodes in right
		if (x->left != nullptr)
		{
			printNodes(x->right);
		}
	}
};
int main()
{
	Node* top = new Node();
	top->data = 2;
	Node* left = new Node();
	left->data = 7;
	top->left = left;
	top->right = right;
}
