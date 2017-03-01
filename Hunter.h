#pragma once
#include <string>
class Hunter
{
private:
	int _health;
	int _energy;
	std::string _name;
public:
	Hunter();
	Hunter(int health, int energy, std::string name);
	~Hunter();
};

