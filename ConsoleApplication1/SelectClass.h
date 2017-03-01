#pragma once
#include "Warrior.h"
#include "Rogue.h"
#include "Mage.h"
#include "Hunter.h"




class SelectClass
{
private:
	std::string _name;
	Hunter _hunter;
	Warrior _warrior;
	Rogue _rogue;
	Mage _mage;

public:
	SelectClass();

	SelectClass(std::string name, Hunter _hunter, Warrior _warrior, Rogue _rogue, Mage _mage);

	std::string getClassInfo();

	~SelectClass();
};

