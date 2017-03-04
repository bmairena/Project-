#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "Hunter.h"
#include "Rogue.h"
using namespace std;

int main()
{
	Warrior warChar;
	Mage mageChar;
	Hunter hunterChar;
	Rogue rogueChar;
	int selection;
	cout << "Welcome to WoW! Please select a class. \n1. Warrior\n2. Mage\n3. Hunter\n4. Rogue\n";
	cin >> selection;
	switch (selection)
	{
	case 1: warChar.getInfo();
		break;
	case 2: mageChar.getInfo();
		break;
	case 3: hunterChar.getInfo();
		break;
	case 4: rogueChar.getInfo();
		break;
	}
	system("pause");

	
}