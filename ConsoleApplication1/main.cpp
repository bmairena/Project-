#include <iostream>
#include "Warrior.h"
#include "Hunter.h"
#include "Mage.h"
#include "Rogue.h"



using namespace std;
int main()
{
	Warrior warChar;
	Hunter huntChar;
	Mage mageChar;
	Rogue rogueChar;
	int choice;
	cout << "Welcome to Warcraft. Please select a class. \n 1 for Warrior \n 2 for Hunter \n 3 for Mage \n 4 for Rogue" << endl;
	cin >> choice;
	switch(choice)
	{
	case 1: cout << warChar.getWarriorInfo() << endl;
		break;
	//case 2: cout << huntChar.getHunterInfo() << endl;
	//	break;
	//case 3: cout << mageChar.getMageInfo() << endl;
	//	break;
	//case 4: cout << rogueChar.getRogueInfo() << endl;
	//	break;
	}
	return 0;
}