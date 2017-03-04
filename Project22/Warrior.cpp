#include "Warrior.h"
#include <iostream>
Warrior::Warrior()
{
	health = 10;
	rage = 10;
	armor = 10;
	name = "Garrosh";
}
Warrior::Warrior(int _armor, int _rage, int _health, std::string _name) 
{
	health = _health;
	rage = _rage;
	armor = _armor;
	name = _name;
}
void Warrior::getInfo()
{
	std::cout << "\nName: " << name << "\nHealth: " << health << "\nRage: " << rage << "\nArmor: " << armor << std::endl;
}