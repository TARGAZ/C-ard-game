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
		name = "NotDefined";
		PV = 0;
		armor = 0;
		ability_id = 0;
	}
	
	~Champion()
	{
		name.clear();
	}
	
	void ability_effect();
};

#endif //_CHAMPION_H