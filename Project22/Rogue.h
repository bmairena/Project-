#pragma once
#include <string>
class Rogue
{
	int armor;
	int health;
	int energy;
	std::string name;
public:
	Rogue();
	Rogue(int _armor, int _energy, int _health, std::string _name);
	void getInfo();
};