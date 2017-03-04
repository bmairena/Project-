#pragma once
#include <string>
class Rogue
{
private:
	int _health;
	int _energy;
	std::string _name;
	std::string _description;
public:
	Rogue();

	Rogue(int health, int energy, std::string name, std::string description);
	std::string getRogueInfo();

	~Rogue();
};

