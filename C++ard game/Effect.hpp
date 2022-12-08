#ifndef _EFFECT_H
#define _EFFECT_H

class Effect {
private:
	bool shield;
	bool wind_fury;
	bool provocation;
	bool reincarnation;
	bool agony_rale;

	void ApplyEffect();
};

#endif //_EFFECT_H