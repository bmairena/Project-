#pragma once
#include <string>
class Rogue
{
private:
	int _health;
	int _energy;
	std::string _name;
public:
	Rogue();

	Rogue(int health, int energy, std::string name);

	~Rogue();
};

