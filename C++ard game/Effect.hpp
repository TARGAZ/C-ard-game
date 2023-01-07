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
	
	bool getRaffalle_de_vent();
	
	bool getProvocation();
	
	bool getReincarnation();
	
	bool getRale_agony();
	
	bool getCri_de_guerre();
	
	void setBouclier(bool state);
	
	void setRaffalle_de_vent(bool state);
	
	void setProvocation(bool state);
	
	void setReincarnation(bool state);
};

#endif //_EFFECT_H
//Name // Damage // Hp // Type // Cost // Level // Effect