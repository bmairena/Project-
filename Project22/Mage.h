#pragma once
#include <string>
class Mage
{
private:
	int armor;
	int health;
	std::string name;
public:
	Mage();
	Mage(int _armor, int _health, std::string _name);
	void getInfo();
};