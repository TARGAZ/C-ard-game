
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
	std::vector<Card*> Shop;
	int freeze_shop;
	int cost_levelup;


public:
	Player()
	{
		name = "notDefined";
		money = 0;
		level = 1;
		freeze_shop = 0;
		cost_levelup = 6;
	}

	~Player()
	{

	}

	int get_money();
	
	void set_money(int newMoney);
	
	void set_name(std::string nameof);
	
	int get_freeze();
	
	void change_freeze();
	
	int get_level();
	
	void upgrade_level();
	
	int get_cost_levelup();
	
	void set_cost_levelup(int newCost);
	
	void player_turn();
	
	Champion* get_champion();
	
	void set_champion();
	
	void set_champion_automatically();

	std::vector<Card*> getHand();
	
	void setHand(std::vector<Card*> newHand);

	std::vector<Card*> getShop();
	
	void setShop(std::vector<Card*> newShop);

	std::vector<Card*> getBoard();

	void setBoard(std::vector<Card*> Board);//Adrien

	std::string get_name();

};

#endif //_PLAYER_H                                                                                                                                                                                                                                                                                                                