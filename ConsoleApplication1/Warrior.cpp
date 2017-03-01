#include "Warrior.h"



Warrior::Warrior()
{
	_armor = 10;
	_health = 10;
	_rage = 20;
	_name = "Garrosh";

}

Warrior::Warrior(int armor, int health, int rage, std::string name)
{
	_armor = armor;
	_health = health;
	_rage = rage;
	_name = name
}




Warrior::~Warrior()
{
}
