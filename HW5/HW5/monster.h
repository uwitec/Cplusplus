#ifndef MONSTER_H
#define MONSTER_H
template <typename T>
class Monster
{
public:
	T name;
	double size;
	int limbs;

	Monster(T creatureName, double creatureSize, int appendages); //Constructor
	bool operator==(const Monster &compare)const; // Operator Overload
};
#include "monster.cpp"
#endif