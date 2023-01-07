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

	std::vector<Card*> get_possible_card(std::vector<Card*> getCardList, int level);

	std::vector<Card*> pick_possible_card(std::vector<Card*> possible_card, int howmany);

	std::vector<Card*> complete_shop_possible_card(std::vector<Card*> possible_card, std::vector<Card*> pShop);

	std::vector<Card*> getCardList();
	
};


#endif