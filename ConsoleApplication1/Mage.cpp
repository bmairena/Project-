#include "Mage.h"


Mage::Mage()
{
	_health = 10;
	_mana = 50;
	_name = "Khadgar";
}

Mage::Mage(int health, int mana, std::string name)
{
	_health = health;
	_mana = mana;
	_name = name;
}


Mage::~Mage()
{
}
