/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is the driver program of the Set Data Structure. Several monster objects were created and the Set was populated with the monsters.
 * The statistics for the set was then shown by counting how many times the monster was added into the set. Lastly, the top three monsters
 * that were added were ranked by frequency and the results were tallied.
 *
 * * Nothing special in the program execution. 
 *
 */

#include <iostream>
#include "monster.h"
#include "set.h"
using namespace std;

int main()
{
	// Monster object creation
	
	Monster<string> megalodon("megalodon", 10.1, 2);
	Monster<string> octopus("octopus", 20, 8);
	Monster<string> alien("alien", 36, 2);
	Monster<string> cthulu("cthulu", 44, 50);
	Monster<string> beholder("beholder", 18, 0);
	Monster<string> knoll("knoll", 62, 2);
	Monster<string> kobold("kobold", 24, 2);
	Monster<string> genasi("genasi", 55, 2);
	
	//Set creation
	Set<string> newSet(megalodon);
	//The set was then populated
	newSet.add(octopus);
	newSet.add(octopus);
	newSet.add(octopus);
	newSet.add(octopus);
	newSet.add(octopus);
	newSet.add(megalodon);
	newSet.add(megalodon);
	newSet.add(megalodon);
	newSet.add(alien);
	newSet.add(octopus);
	newSet.add(knoll);
	newSet.add(knoll);
	newSet.add(octopus);
	newSet.add(knoll);
	newSet.add(octopus);
	newSet.add(octopus);
	newSet.add(knoll);
	newSet.add(octopus);
	newSet.add(genasi);
	newSet.add(octopus);
	newSet.add(beholder);
	newSet.add(beholder);
	newSet.add(beholder);
	newSet.add(genasi);
	newSet.add(beholder);
	newSet.add(octopus);
	newSet.add(genasi);
	newSet.add(beholder);
	// Output of the result
	cout << "Octupus was added " << newSet.get(octopus) << " times. " << endl;
	cout << "Megalodon was added " << newSet.get(megalodon) << " times. " << endl;
	cout << "Beholder was added " << newSet.get(beholder) << " times. " << endl;
	cout << "Genasi was added " << newSet.get(genasi) << " times. " << endl;
	cout << "Knoll was added " << newSet.get(knoll) << " times. " << endl;
	cout << "Alien was added " << newSet.get(alien) << " times. " << endl;
	cout << "Cthulu was added " << newSet.get(cthulu) << " times. " << endl;
	// The top three frequently added monsters were then displayed.
	newSet.displayRank();
	newSet.printSet();
	system("pause");
	

}