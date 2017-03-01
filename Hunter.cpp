#include "Hunter.h"



Hunter::Hunter()
{
	_health = 10;
	_energy = 50;
	_name = "Rexxar";
}
Hunter::Hunter(int health, int energy, std::string name)
{
	_health = health;
	_energy = energy;
	_name = name;

}


Hunter::~Hunter()
{
}
