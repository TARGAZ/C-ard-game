#ifndef _DRAW_HPP_
#define _DRAW_HPP_

#include <string>
#include <vector>
#include "Player.hpp"
#include "Card.hpp"
#include <iostream>

class Draw
{
private:
	std::vector<Card*> all_card;
	int nb_card;

public:
	Draw()
	{
		nb_card = 0;
	}

	~Draw()
	{

	}

	void BuyPhase();

	void CreateCardList();

	std::vector<Card*> get_possible_card(std::vector<Card*> getCardList, int level) {
		std::vector<Card*> temp;
		for (int i = 0; i < getCardList.size(); i++) {
			if (getCardList[i]->getLevel() <= level) {
				Card* card = new Card(*getCardList[i]);
				temp.push_back(card);
			}
		}
		return temp;
	};

	std::vector<Card*> pick_possible_card(std::vector<Card*> possible_card, int howmany) {
		std::vector<Card*> temp;
		for (int i = 0; i < howmany; i++) {
			int random = rand() % possible_card.size();
			Card* card = new Card(*possible_card[random]);
			temp.push_back(card);
		}
		return temp;
	};
	std::vector<Card*> complete_shop_possible_card(std::vector<Card*> possible_card, std::vector<Card*> pShop) {
		std::vector<Card*> temp = pShop;
		int howmany = 3 - pShop.size();
		for (int i = 0; i < howmany; i++) {
			int random = rand() % possible_card.size();
			Card* card = new Card(*possible_card[random]);
			temp.push_back(card);
		}
		return temp;
	};
	std::vector<Card*> getCardList() {
		return all_card;
	};
	
};


#endif