#include "Rogue.h"
#include <iostream>
Rogue::Rogue()
{
	name = "Garona";
	energy = 10;
	health = 10;
	armor = 20;
}
Rogue::Rogue(int _armor, int _energy, int _health, std::string _name)
{
	name = _name;
	health = _health;
	armor = _armor;
	energy = _energy;
}
void Rogue::getInfo()
{
	std::cout << "\nName: " << name << "\nHealth: " << health << "\nArmor: " << armor << "\nEnergy: " << energy << std::endl;
}