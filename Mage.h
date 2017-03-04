#pragma once
#include <string>
class Mage
{
private:
	int _health;
	int _mana;
	std::string _name;
	std::string _description;

public:
	Mage();
	Mage(int health, int mana, std::string name, std::string description);
	std::string getMageInfo();
	~Mage();
};

