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

	int getDamage()
	{
		return damage;
	}
	
	int getHp()
	{
		return hp;
	}

	int getArmor()
	{
		return armor;
	}

	int getType()
	{
		return type;
	}

	int getAbilityId()
	{
		return ability_id;
	}

	int getCost()
	{
		return cost;
	}

	int getLevel()
	{
		return level;
	}

	void setDamage(int damage)
	{
		this->damage = damage;
	}
	
	void setHp(int hp)
	{
		this->hp = hp;
	}

	void setArmor(int armor)
	{
		this->armor = armor;
	}

	void setType(int type)
	{
		this->type = type;
	}

	void setLevel(int level)
	{
		this->level = level;
	}
};


#endif