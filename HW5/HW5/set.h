#ifndef SET_H
#define SET_H
#include "monster.h"
#include <map>

template<class T>
class Set
{
public:
	map<string, int> hashMap; // a map STL was used
	string name;
	Set(Monster<T> item);
	void add(Monster<T> item);
	int get(Monster<T> item);
	void displayRank();
	void printSet();
};
#include "set.cpp"
#include "monster.cpp"
#endif