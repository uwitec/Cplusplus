#include <iostream>
#include <string>
#include <map>
#include "set.h"
#include "monster.h"
#ifndef SET_CPP
#define SET_CPP

using namespace std;

template <class T>
Set<T>::Set(Monster<T> item) // Constructor
{
	this->name = item.name;
	hashMap[name] = 1;
}
template <class T>
void Set<T>::add(Monster<T> item)
{
	bool increment = false; // Switch
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop using the iterator
	{
		if (it->first == item.name) // If the monster exists in the database
		{
			int temp = hashMap[item.name]; //Set a temp variable
			temp++; // Increment the temp variable
			hashMap[item.name] = temp; // Set the new value to temp
			increment = true; // make increment true for the for loop
		}

	}
	if (increment == false) { // If  monster is not in the database
		hashMap[item.name] = 1; // Create a new entry into database
	}
	increment = false; // Reset switch
}

template <class T>
int Set<T>::get(Monster<T> item)
{
	return hashMap[item.name]; // Return value from key pair
}

template <class T>
void Set<T>::displayRank()
{
	//Sets up variables
	string top;
	string second;
	string third;
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop that traverses through
	{
		if (hashMap[it->first] > hashMap[top]) //If number greater than top
		{
			third = second;
			second = top;
			top = it->first;
		}
		else if (hashMap[it->first] <= hashMap[top] && hashMap[it->first] > hashMap[second]) // If number is between top and second
		{
			third = second;
			second = it->first;
		}
		else if (hashMap[it->first] <= hashMap[second] && hashMap[it->first] > hashMap[third]) // If number is between second and third
		{
			third = it->first;
		}
	}
	// Output
	cout << "1. " << top << endl;
	cout << "2. " << second << endl;
	cout << "3. " << third << endl;
}

template <class T>
void Set<T>::printSet()
{
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop that traverses through
	{
		cout << it->first << " " << hashMap[it->first] << endl;
	}
}
#endif