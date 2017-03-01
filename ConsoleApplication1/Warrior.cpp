#include "Warrior.h"



Warrior::Warrior()
{
	_armor = 10;
	_health = 10;
	_rage = 20;

}

Warrior::Warrior(int armor, int health, int rage)
{
	_armor = armor;
	_health = health;
	_rage = rage;
}




Warrior::~Warrior()
{
}
