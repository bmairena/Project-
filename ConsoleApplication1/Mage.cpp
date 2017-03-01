#include "Mage.h"


Mage::Mage()
{
	_health = 10;
	_mana = 50;
	_name = "Jaina";
}

Mage::Mage(int health, int mana, std::string name)
{
	_health = health;
	_mana = mana;
	std::string name = _name;
}


Mage::~Mage()
{
}
