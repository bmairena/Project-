#include "Rogue.h"



Rogue::Rogue()
{
	_health = 10;
	_energy = 50;
	_name = "Garrona";
}

Rogue::Rogue(int health, int energy, std::string name)
{
	_health = health;
	_energy = energy;
	_name = name;

}

Rogue::~Rogue()
{
}
