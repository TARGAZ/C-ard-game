#ifndef _EFFECT_H
#define _EFFECT_H

class Effect {
private:
	bool bouclier;
	bool rafale_de_vent;
	bool reincarnation;

public:
	Effect()
	{
		bouclier = false;
		rafale_de_vent = false;
		reincarnation = false;

	}

	Effect(bool bouclier, bool rafale_de_vent, bool provocation, bool reincarnation, bool rale_agony, bool cri_de_guerre)
	{
		this->bouclier = bouclier;
		this->rafale_de_vent = rafale_de_vent;
		this->reincarnation = reincarnation;
	}

	~Effect()
	{

	}

	//get for all the effects
	bool getBouclier();

	bool getRafale_de_vent();

	bool getReincarnation();

	void setBouclier(bool state);

	void setRafale_de_vent(bool state);

	void setReincarnation(bool state);
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect