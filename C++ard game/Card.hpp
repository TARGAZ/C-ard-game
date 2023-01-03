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
	int type;
	int cost;
	int level;
	Effect effect_card;

public:
	Card()
	{
		name = "Default";
		damage = 0;
		hp = 0;
		type = 0;
		cost = 0;
		level = 0;
	}
	Card(std::string name, int damage, int hp, int type, int cost, int level)
	{
		this->name = name;
		this->damage = damage;
		this->hp = hp;
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

	int getType()
	{
		return type;
	}

	int getCost()
	{
		return cost;
	}

	int getLevel()
	{
		return level;
	}

	Effect getEffectCard()
	{
		return effect_card;
	}

	std::string getName()
	{
		return name;
	}

	void setDamage(int damage)
	{
		this->damage = damage;
	}
	
	void setHp(int hp)
	{
		this->hp = hp;
	}

	void setType(int type)
	{
		this->type = type;
	}

	void setLevel(int level)
	{
		this->level = level;
	}
	
	void setCost(int cost)
	{
		this->cost = cost;
	}

	void setEffectCard(Effect effect)
	{
		effect_card = effect;
	}
	
	void setName(std::string name)
	{
		this->name = name;
	}
	
};


#endif