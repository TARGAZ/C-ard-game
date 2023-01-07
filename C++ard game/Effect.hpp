#ifndef _EFFECT_H
#define _EFFECT_H

class Effect {
private:
	bool bouclier;
	bool rafale_de_vent;
	bool provocation;
	bool reincarnation;
	bool rale_agony;
	bool cri_de_guerre;

	void ApplyEffect();
public:
	Effect()
	{
		bouclier = false;
		rafale_de_vent = false;
		provocation = false;
		reincarnation = false;
		rale_agony = false;
		cri_de_guerre = false;
	}

	Effect(bool bouclier, bool rafale_de_vent, bool provocation, bool reincarnation, bool rale_agony, bool cri_de_guerre)
	{
		this->bouclier = bouclier;
		this->rafale_de_vent = rafale_de_vent;
		this->provocation = provocation;
		this->reincarnation = reincarnation;
		this->rale_agony = rale_agony;
		this->cri_de_guerre = cri_de_guerre;
	}

	~Effect()
	{

	}

	//get for all the effects
	bool getBouclier()
	{
		return bouclier;
	}
	bool getRafale_de_vent()
	{
		return rafale_de_vent;
	}
	bool getProvocation()
	{
		return provocation;
	}
	bool getReincarnation()
	{
		return reincarnation;
	}
	bool getRale_agony()
	{
		return rale_agony;
	}
	bool getCri_de_guerre()
	{
		return cri_de_guerre;
	}


	void setBouclier(bool state)
	{
		bouclier = state;
	}
	void setRafale_de_vent(bool state)
	{
		rafale_de_vent = state;
	}
	void setProvocation(bool state)
	{
		provocation = state;
	}
	void setReincarnation(bool state)
	{
		reincarnation = state;
	}
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect