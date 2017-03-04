#include "Rogue.h"



Rogue::Rogue()
{
	_health = 10;
	_energy = 50;
	_name = "Garrona";
	_description = _name, _health, _energy;
}

Rogue::Rogue(int health, int energy, std::string name, std::string description)
{
	_health = health;
	_energy = energy;
	_name = name;

}

std::string Rogue::getRogueInfo()
{
	_description = "Name:" + _name
		+ "\nEnergy:" + std::to_string(_energy)
		+ "\nHealth:" + std::to_string(_health);
	return _description;
}

Rogue::~Rogue()
{
}
