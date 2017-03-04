#pragma once
#include <string>
class Hunter
{
private:
	int _health;
	int _energy;
	std::string _name;
	std::string _description;
public:
	Hunter();
	Hunter(int health, int energy, std::string name, std::string description);
	std::string getHunterInfo();

	~Hunter();
};

