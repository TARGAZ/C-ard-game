
#include "Player.hpp"
#include "Champion.hpp"
#include "Card.hpp"
#include "Effect.hpp"
#include "Game.hpp"
#include "Draw.hpp"
#include <iostream>

int main()
{
	Card* card = NULL;
	Card* card2 = new Card("Toto", 1, 2, 3, 4, 5, 6, 7);
	Draw draw = Draw();
	draw.CreateCardList();
	std::cout << draw.getCardList().size() << std::endl;

	return 0;
}