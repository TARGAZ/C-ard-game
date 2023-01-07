
#include "Player.hpp"

/**
 * Player implementation
 */


void Player::player_turn()
{

}
Champion* Player::get_champion()
{
	return &champion;
}
void Player::set_champion()
{
	champion.Validation_Champion(Champion_Proposition());
}
void Player::set_champion_automatically()
{
	champion.Validation_Champion(Find_Champion_Proposition());
	name = "Not Bob";
}

void Player::setBoard(std::vector<Card*> newBoard)
{
	Board = newBoard;
}

/*void Player::setBoard(std::vector<Card*> newBoard)
{
	this->Board = newBoard;
}*/