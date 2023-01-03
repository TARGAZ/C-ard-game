#ifndef _EFFECT_H
#define _EFFECT_H

class Effect {
private:
	bool bouclier;
	bool raffalle_de_vent;
	bool provocation;
	bool reincarnation;
	bool rale_agony;
	bool cri_de_guerre;

	void ApplyEffect();
public :
	Effect()
	{
		bouclier = false;
		raffalle_de_vent = false;
		provocation = false;
		reincarnation = false;
		rale_agony = false;
		cri_de_guerre = false;
	}
	
	~Effect()
	{
		
	}
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect