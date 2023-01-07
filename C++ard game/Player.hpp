
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

	int get_money() {
		return money;
	};
	void set_money(int newMoney) {
		money = newMoney;
	};
	void set_name(std::string nameof) {
		name = nameof;
	};
	int get_freeze() {
		return freeze_shop;
	};
	void change_freeze() {
		if (freeze_shop == 1) {
			freeze_shop = 0;
		}
		else {
			freeze_shop = 1;
		}
	};
	int get_level() {
		return level;
	};
	void upgrade_level() {
		level = level + 1;
	};
	int get_cost_levelup() {
		return cost_levelup;
	};
	void set_cost_levelup(int newCost) {
		cost_levelup = newCost;
	};
	void player_turn();
	Champion* get_champion();
	void set_champion();
	void set_champion_automaticly();

	std::vector<Card*> getHand() {
		std::vector<Card*> rhand;
		for (int i = 0; i < Hand.size(); i++)
		{
			Card* temp = new Card(Hand[i]->getName(), Hand[i]->getDamage(), Hand[i]->getHp(), Hand[i]->getType(), Hand[i]->getCost(), Hand[i]->getLevel(), Hand[i]->getEffectCard());
			rhand.push_back(temp);
		}
		return rhand;
	};
	void setHand(std::vector<Card*> newHand) {
		Hand = newHand;
	};

	std::vector<Card*> getShop() {
		std::vector<Card*> rShop;
		for (int i = 0; i < Shop.size(); i++)
		{
			Card* temp = new Card(Shop[i]->getName(), Shop[i]->getDamage(), Shop[i]->getHp(), Shop[i]->getType(), Shop[i]->getCost(), Shop[i]->getLevel(), Shop[i]->getEffectCard());
			rShop.push_back(temp);
		}
		return rShop;
	};
	void setShop(std::vector<Card*> newShop) {
		Shop = newShop;
	};

	std::vector<Card*> getBoard() {
		std::vector<Card*> rboard;
		for (int i = 0; i < Board.size(); i++)
		{
			Card* temp = new Card(Board[i]->getName(), Board[i]->getDamage(), Board[i]->getHp(), Board[i]->getType(), Board[i]->getCost(), Board[i]->getLevel(), Board[i]->getEffectCard());
			rboard.push_back(temp);
		}
		return rboard;
	};

	void setBoard(std::vector<Card*> Board);//Adrien

	std::string get_name() {
		return name;
	};
	//void setBoard(std::vector<Card*> Board);//tanguy

};

#endif //_PLAYER_H                                                                                                                                                                                                                                                                                                                