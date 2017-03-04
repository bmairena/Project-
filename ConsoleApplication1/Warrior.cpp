#include "Warrior.h"
#include <string>



Warrior::Warrior()
{
	_armor = 10;
	_health = 10;
	_rage = 20;
	_name = "Garrosh";
	_description = _rage, _armor, _health, _name;
}

Warrior::Warrior(int armor, int health, int rage, std::string name, std::string description)
{
	_armor = armor;
	_health = health;
	_rage = rage;
	_name = name;
}

std::string Warrior::getWarriorInfo()
{
	_description = "Name:" + _name + "\nRage:" 
		+ std::to_string(_rage) + "\nHealth:" 
		+ std::to_string(_health) + "\nArmor:" 
		+ std::to_string(_armor);
	return _description;
}



Warrior::~Warrior()
{
}
