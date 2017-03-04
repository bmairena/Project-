#pragma once
#include <string>
class Warrior
{
private:
	int _armor;
	int _health;
	int _rage;
	std::string _name;
	std::string _description;

public:
	Warrior();
	
	Warrior(int armor, int health, int rage, std::string name, std::string _description);
	std::string getWarriorInfo();

	~Warrior();
};

