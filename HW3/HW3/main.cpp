#include <iostream>
#include "node.h"
#include "list.h"
using namespace std;


int main()
{
	List sentence;

	/*string *the = "the";
	string quick = "quick";
	string brown = "brown";
	string fox = "fox";
	string jumps = "jumps";*/

	sentence.add("The");
	sentence.add("quick");
	sentence.add("brown");
	sentence.add("fox");
	sentence.add("jumps");

	sentence.printList();
	cout << "---------" << endl;

	sentence.printReverseIterative();
	cout << "---------" << endl;
	
	sentence.printReverseRecursive(sentence.getHead());
	system("pause");


}