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
		provocation = false;
		reincarnation = false;
		rale_agony = false;
		cri_de_guerre = false;
	}

	Effect(bool bouclier, bool raffalle_de_vent, bool provocation, bool reincarnation, bool rale_agony, bool cri_de_guerre)
	{
		this->bouclier = bouclier;
		this->raffalle_de_vent = raffalle_de_vent;
		this->provocation = provocation;
		this->reincarnation = reincarnation;
		this->rale_agony = rale_agony;
		this->cri_de_guerre = cri_de_guerre;
	}

	~Effect()
	{

	}
	bool getBouclier()
	{
		return bouclier;
	}
	bool getRaffalle_de_vent()
	{
		return raffalle_de_vent;
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

	//get for all the effects
	bool getBouclier()
	{
		return bouclier;
	}
	bool getRaffalle_de_vent()
	{
		return raffalle_de_vent;
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
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect