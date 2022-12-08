#ifndef _CARDS_HPP_
#define _CARDS_HPP_

#include <string>

class Card
{
private :
	std::string name;
	int damage;
	int PV;
	int armor;
	int type;
	int ability_id;
	int cost;
	int level;

public :
	Card()
	{
		name = "Default";
		damage = 0;
		PV = 0;
		armor = 0;
		type = 0;
		ability_id = 0;
		cost = 0;
		level = 0;
	}

	~Card()
	{

	}
	
};


#endif