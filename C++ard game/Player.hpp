
#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>

class Player {
public:

	void player_turn();
	Player()
	{
		name = "Michel";
		money = 3;
		level = 0;
	}
private:
	std::string name;
	int money;
	int level;
};

#endif //_PLAYER_H