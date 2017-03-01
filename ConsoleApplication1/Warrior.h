#pragma once
#include <string>
class Warrior
{
private:
	int _armor;
	int _health;
	int _rage;
	std::string _name;

public:
	Warrior();
	
	Warrior(int armor, int health, int rage, std::string name);

	~Warrior();
};

