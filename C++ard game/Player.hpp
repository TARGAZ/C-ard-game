
#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include <vector>
#include "Champion.hpp"
#include "Draw.hpp"
#include "Card.hpp"


class Player {
private:
	std::string name;
	int money;
	int level;
	Champion champion;
	std::vector<Card*> Hand;
	std::vector<Card*> Board;


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

	std::vector<Card*> getBoard() {
		return Board;
	};

	void setBoard(std::vector<Card*> Board, Player& player);
	
	void set_champion(Champion champion);
	
	//std::string getName();
};

#endif //_PLAYER_H                                                                                                                                                                                                                                                                                                                