#include "Hunter.h"
#include <iostream>
Hunter::Hunter()
{
	name = "Rexxar";
	energy = 10;
	health = 10;
	armor = 20;
}
Hunter::Hunter(int _armor, int _energy, int _health, std::string _name)
{
	name = _name;
	health = _health;
	armor = _armor;
	energy = _energy;
}
void Hunter::getInfo()
{
	std::cout << "\nName: " << name << "\nHealth: " << health << "\nArmor: " << armor  << "\nEnergy: " << energy << std::endl;
}