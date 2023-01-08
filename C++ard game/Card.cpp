#include "Card.hpp"

int Card::getDamage()
{
	return damage;
}

int Card::getHp()
{
	return hp;
}

int Card::getType()
{
	return type;
}

int Card::getCost()
{
	return cost;
}

int Card::getLevel()
{
	return cost;
}

Effect Card::getEffectCard()
{
	return effect_card;
}

Effect*  Card::getRefEffectCard()
{
	return &effect_card;
}

std::string Card::getName()
{
	return name;
}

void Card::setDamage(int damage)
{
	this->damage = damage;
}

void Card:: setHp(int hp)
{
	this->hp = hp;
}

void Card::setType(int type)
{
	this->type = type;
}

void Card::setLevel(int level)
{
	this->level = level;
}

void Card::setCost(int cost)
{
	this->cost = cost;
}

void Card::setEffectCard(Effect effect)
{
	effect_card = effect;
}

void Card::setName(std::string name)
{
	this->name = name;
}
