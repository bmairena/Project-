#pragma once
#include <string>
class Warrior
{
private:
	int _armor;
	int _health;
	int _rage;

public:
	Warrior();
	
	Warrior(int armor, int health, int rage);

	~Warrior();
};

