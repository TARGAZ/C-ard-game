
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
	Player(std::string player_name)
	{
		name = player_name;
		money = 3;
		level = 1;
		freeze_shop = 0;
		cost_levelup = 6;
	}

	~Player()
	{

	}

	int get_money(Player& player) {
		return player.money;
	};
	void set_money(int newMoney) {
		money = newMoney;
	};
	int get_freeze(Player& player) {
		return player.freeze_shop;
	};
	void change_freeze() {
		if (freeze_shop == 1) {
			freeze_shop = 0;
		}
		else {
			freeze_shop = 1;
		}
	};
	int get_level(Player& player) {
		return player.level;
	};
	void upgrade_level() {
		level = level + 1;
	};
	int get_cost_levelup(Player& player) {
		return player.cost_levelup;
	};
	void set_cost_levelup(int newCost) {
		cost_levelup = newCost;
	};
	void player_turn();
	void set_champion();
	void set_champion_automaticly();

	std::vector<Card*> getHand() {
		std::vector<Card*> rhand;
		for (int i = 0; i < Hand.size(); i++)
		{
			Card* temp = new Card(Hand[i]->getName(), Hand[i]->getDamage(), Hand[i]->getHp(), Hand[i]->getType(), Hand[i]->getCost(), Hand[i]->getLevel());
			rhand.push_back(temp);
		}
		return rhand;
	};
	void setHand(std::vector<Card*> newHand, Player& player){
		player.Hand = newHand;
	};
	
	std::vector<Card*> getShop() {
		std::vector<Card*> rShop;
		for (int i = 0; i < Shop.size(); i++)
		{
			Card* temp = new Card(Shop[i]->getName(), Shop[i]->getDamage(), Shop[i]->getHp(), Shop[i]->getType(), Shop[i]->getCost(), Shop[i]->getLevel());
			rShop.push_back(temp);
		}
		return rShop;
	};
	void setShop(std::vector<Card*> newShop, Player& player) {
		player.Shop = newShop;
	};

	std::vector<Card*> getBoard() {
		std::vector<Card*> rboard;
		for (int i = 0; i < Board.size(); i++)
		{
			Card* temp = new Card(Board[i]->getName(), Board[i]->getDamage(), Board[i]->getHp(), Board[i]->getType(), Board[i]->getCost(), Board[i]->getLevel());
			rboard.push_back(temp);
		}
		return rboard;
	};

	void setBoard(std::vector<Card*> Board, Player& player);
	
	void set_champion(Champion champion);

	
	//std::string getName();
};

#endif //_PLAYER_H                                                                                                                                                                                                                                                                                                                