#ifndef _CARDS_HPP_
#define _CARDS_HPP_

#include <string>

class Cards
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
	Cards();
	~Cards();
};


#endif