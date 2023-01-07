
#include "Effect.hpp"

/**
 * Effect implementation
 */


void Effect::ApplyEffect()
{
	if (bouclier = true)
	{
		//Apply shield effect
	}
	if (raffalle_de_vent = true)
	{
		//Apply wind_fury effect
	}
	if (provocation = true)
	{
		//Apply provocation effect
	}
	if (reincarnation = true)
	{
		//Apply reincarnation effect
	}
	if (rale_agony = true)
	{
		//Apply agony_rale effect
	}
}

bool Effect::getBouclier()
{
	return bouclier;
}
bool Effect::getRaffalle_de_vent()
{
	return raffalle_de_vent;
}
bool Effect::getProvocation()
{
	return provocation;
}
bool Effect::getReincarnation()
{
	return reincarnation;
}
bool Effect::getRale_agony()
{
	return rale_agony;
}
bool Effect::getCri_de_guerre()
{
	return cri_de_guerre;
}


void Effect::setBouclier(bool state)
{
	bouclier = state;
}
void Effect::setRaffalle_de_vent(bool state)
{
	raffalle_de_vent = state;
}
void Effect::setProvocation(bool state)
{
	provocation = state;
}
void Effect::setReincarnation(bool state)
{
	reincarnation = state;
}