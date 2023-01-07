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
public:
	Effect()
	{
		bouclier = false;
		raffalle_de_vent = false;	
		reincarnation = false;

	}

	Effect(bool bouclier, bool raffalle_de_vent, bool provocation, bool reincarnation, bool rale_agony, bool cri_de_guerre)
	{
		this->bouclier = bouclier;
		this->raffalle_de_vent = raffalle_de_vent;
		this->reincarnation = reincarnation;
	}

	~Effect()
	{

	}

	//get for all the effects
	bool getBouclier()
	{
		return bouclier;
	}
	bool getRaffalle_de_vent()
	{
		return raffalle_de_vent;
	}
	bool getReincarnation()
	{
		return reincarnation;
	}
	void setBouclier(bool state)
	{
		bouclier = state;
	}
	void setRaffalle_de_vent(bool state)
	{
		raffalle_de_vent = state;
	}
	void setReincarnation(bool state)
	{
		reincarnation = state;
	}
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect