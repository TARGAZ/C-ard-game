
#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>

class Player {
private:
	std::string name;
	int money;
	int level;
	
public:

	void player_turn();
	Player()
	{
		name = "notDefined";
		money = 0;
		level = 0;
	}
	
	~Player()
	{
		name.clear();
	}
};

#endif //_PLAYER_H