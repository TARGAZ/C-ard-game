#ifndef _CHAMPION_H
#define _CHAMPION_H

#include <string>

class Champion
{
private:
	std::string name;
	int PV;
	int armor;
	int ability_id;

public:
	Champion()
	{
		name = "Pablo";
		PV = 20;
		armor = 10;
		ability_id = 0;
	}
	void ability_effect();
};

#endif //_CHAMPION_H