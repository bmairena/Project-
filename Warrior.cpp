#include "Warrior.h"



Warrior::Warrior()
{
	_armor = 10;
	_health = 10;
	_rage = 20;

}

Warrior::Warrior(int armor)
{
	_armor = armor;
}

Warrior::Warrior(int health)
{
	_health = health;
}
Warrior::Warrior(int rage)
{
	_rage = rage;
}


Warrior::~Warrior()
{
}
