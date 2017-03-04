#include "Mage.h"
#include <iostream>
Mage::Mage()
{
	name = "Jaina";
	health = 20;
	armor = 5;
}
Mage::Mage(int _armor, int _health, std::string _name)
{
	name = _name;
	armor = _armor;
	health = _health;
}
void Mage::getInfo()
{
	std::cout << "\nName: " << name << "\nHealth: " << health <<  "\nArmor: " << armor << std::endl;
}