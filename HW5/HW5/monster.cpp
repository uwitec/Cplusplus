/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is header file for the monster class that was used to populate the set.
 *
 */
#include <iostream>
#include <string>
#include "monster.h"
#ifndef MONSTER_CPP
#define MONSTER_CPP
using namespace std;

// Constructor
template <typename T>
Monster<T>::Monster(T creatureName, double creatureSize, int appendages)
{
	name = creatureName;
	if (size > 0)
	{
		size = creatureSize;
	}
	else
	{
		size = 1;
	}
	if (limbs >= 0)
	{
		limbs = appendages;
	}
	else
	{
		limbs = 0;
	}
}

template <typename T>
bool Monster<T>::operator== (const Monster<T> &compare) const // Operator overloading
{
	return this->name == compare.name;
}

#endif