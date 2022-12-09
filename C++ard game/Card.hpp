#ifndef _CARD_HPP_
#define _CARD_HPP_

#include <string>
#include "Effect.hpp"
class Card
{
private:
	std::string name;
	int damage;
	int hp;
	int armor;
	int type;
	int ability_id;
	int cost;
	int level;
	Effect effect_card;

public:
	Card()
	{
		name = "Default";
		damage = 0;
		hp = 0;
		armor = 0;
		type = 0;
		ability_id = 0;
		cost = 0;
		level = 0;
	}
	Card(std::string name, int damage, int hp, int armor, int type, int ability_id, int cost, int level)
	{
		this->name = name;
		this->damage = damage;
		this->hp = hp;
		this->armor = armor;
		this->type = type;
		this->ability_id = ability_id;
		this->cost = cost;
		this->level = level;
	}
	~Card()
	{

	}

	void FindAbility();

};


#endif