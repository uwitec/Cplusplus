#include <iostream>
#include "node.h"
#include "list.h"
using namespace std;


int main()
{
	List sentence;

	sentence.add("The");
	sentence.add("quick");
	sentence.add("brown");
	sentence.add("fox");
	sentence.add("jumps");
	sentence.add("over");
	sentence.add("the");
	sentence.add("lazy");
	sentence.add("dog");

	cout << "---List---" << endl;
	sentence.printList();

	cout << "\n---List in Reverse (Iterative)---" << endl;
	sentence.printReverseIterative();

	cout << "\n---List in Reverse (Recursive)---" << endl;
	sentence.printReverseRecursive(sentence.getHead());
	
	cout << "\n---Deep Copy---" << endl;
	List deepCopy(sentence);
	deepCopy.printList();

	system("pause");


}