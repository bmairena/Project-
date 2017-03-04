#include "Hunter.h"



Hunter::Hunter()
{
	_health = 10;
	_energy = 50;
	_name = "Rexxar";
	_description = _name, _energy, _health ;
}
Hunter::Hunter(int health, int energy, std::string name, std::string description)
{
	_health = health;
	_energy = energy;
	_name = name;

}
std::string Hunter::getHunterInfo()
{
	_description = "Name:" + _name+ "\nEnergy:" 
		+ std::to_string(_energy)+ "\nHealth:" 
		+ std::to_string(_health);
	return _description;
}


Hunter::~Hunter()
{
}
