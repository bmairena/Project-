#pragma once
#include <string>
class Mage
{
private:
	int _health;
	int _mana;
	std::string _name;

public:
	Mage();
	Mage(int health, int mana, std::string name);
	~Mage();
};

