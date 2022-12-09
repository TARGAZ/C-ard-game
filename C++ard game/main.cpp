
#include "Player.hpp"
#include "Champion.hpp"
#include "Card.hpp"
#include "Effect.hpp"
#include "Game.hpp"
#include "Champ.hpp"
#include <string>
#include <iostream>

int main()
{
	/*Game game = Game();
	Champion champion = Champion();
	Effect effect = Effect();
	Card card = Card();
	Player player = Player();*/
	Champion c  = Champion();
	c.Validation_Champion(c.Champion_Proposition());
	
	return 0;
}