#include "Mage.h"


Mage::Mage()
{
	_health = 10;
	_mana = 50;
	_name = "Khadgar";
	_description = _mana, _name, _health;
}

Mage::Mage(int health, int mana, std::string name, std::string description)
{
	_health = health;
	_mana = mana;
	_name = name;
}

std::string Mage::getMageInfo()
{
	_description = "Name:" + _name 
		+ "\nMana:" + std::to_string(_mana)
		+ "\nHealth:"	+ std::to_string(_health);
	return _description;
}

Mage::~Mage()
{
}
