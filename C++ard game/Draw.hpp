#ifndef _DRAW_HPP_
#define _DRAW_HPP_

#include <string>
#include "Card.hpp"

class Draw
{
private:
	Card card;
	int nb_card;

public:
	Draw()
	{
		nb_card = 0;
	}

	~Draw()
	{

	}

	void buy_phase();
};


#endif