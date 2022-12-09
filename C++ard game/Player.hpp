
#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include "Champion.hpp"

class Player {
private:
	std::string name;
	int money;
	int level;
	Champion champion;

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

	}

	int get_money(int money, int nbround);

	void player_turn();
	void set_champion();

};

#endif //_PLAYER_H                                                                                                                                                                                                                                                                                                                