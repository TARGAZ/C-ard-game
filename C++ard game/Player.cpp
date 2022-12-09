
#include "Player.hpp"

/**
 * Player implementation
 */


void Player::player_turn()
{
}

int Player::get_money(int money, int nbround)
{
	int var;
	var = money + 1;
	if (var > 10)
		var = 10;
	return var;
}

