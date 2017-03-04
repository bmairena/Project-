#pragma once
#include <string>
class Warrior
{
private:
	int armor;
	int rage;
	int health;
	std::string name;
public:
	Warrior();
	Warrior(int _armor, int _rage, int _health, std::string _name);
	void getInfo();
};