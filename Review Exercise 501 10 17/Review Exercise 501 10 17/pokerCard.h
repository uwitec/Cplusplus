#include <iostream>
#ifndef POKERCARD_H
#define POKERCARD_H
using namespace std;

class PokerCard
{
private:
	int faceValue;
	char suit;
public:
	PokerCard(int number, char shape);
	void toString();
	void equals();
};
#endif