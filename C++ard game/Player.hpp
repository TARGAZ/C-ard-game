
#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>

class Player {
private:
	std::string name;
	int money;
	int level;
	
public:	
	Player()
	{
		name = "notDefined";
		money = 0;
		level = 0;
	}
	Player(std::string player_name)
	{
		name = player_name;
		money = 0;
		level = 0;
	}
	
	~Player()
	{
		name.clear();
	}
	void player_turn();
};

#endif //_PLAYER_H