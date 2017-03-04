#pragma once
#include <string>
class Hunter
{
	int armor;
	int health;
	int energy;
	std::string name;
public:
	Hunter();
	Hunter(int _armor, int _energy, int _health, std::string _name);
	void getInfo();
};