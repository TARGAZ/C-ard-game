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
	Card(std::string name, int damage, int hp, int type, int cost, int level, bool bouclier, bool raffale_de_vent, bool provocation, bool réincarnation, bool rale_agony, bool cri_de_guerre)
	{
		this->name = name;
		this->damage = damage;
		this->hp = hp;
		this->type = type;
		this->cost = cost;
		this->level = level;
		effect_card = Effect(bouclier, raffale_de_vent, provocation, réincarnation, rale_agony, cri_de_guerre);
	}
	Card(std::string name, int damage, int hp, int type, int cost, int level, Effect effects)
	{
		this->name = name;
		this->damage = damage;
		this->hp = hp;
		this->type = type;
		this->cost = cost;
		this->level = level;
		this->effect_card = effects;
	}
	~Card()
	{

	}
	
	int getDamage();
	
	int getHp();
	
	int getType();
	
	int getCost();
	
	int getLevel();
	
	Effect getEffectCard();
	
	Effect* getRefEffectCard();
	
	std::string getName();
	
	void setDamage(int damage);
	
	void setHp(int hp);
	
	void setType(int type);
	
	void setLevel(int level);
	
	void setCost(int cost);
	
	void setEffectCard(Effect effect);
	
	void setName(std::string name);
};



#endif