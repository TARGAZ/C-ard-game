
#include "Effect.hpp"

/**
 * Effect implementation
 */


bool Effect::getBouclier()
{
	return bouclier;
}
bool Effect::getRafale_de_vent()
{
	return rafale_de_vent;
}
bool Effect::getReincarnation()
{
	return reincarnation;
}


void Effect::setBouclier(bool state)
{
	bouclier = state;
}
void Effect::setRafale_de_vent(bool state)
{
	rafale_de_vent = state;
}
void Effect::setReincarnation(bool state)
{
	reincarnation = state;
}