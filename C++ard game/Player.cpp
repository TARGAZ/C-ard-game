
#include "Player.hpp"

/**
 * Player implementation
 */


void Player::player_turn()
{

}
void Player::set_champion()
{
	champion.Validation_Champion(Champion_Proposition());
}
void Player::set_champion_automaticly()
{
	champion.Validation_Champion(Find_Champion_Proposition());
	name = "Not Bob";
}

void Player::setBoard(std::vector<Card*> newBoard, Player& player)
{
	player.Board = newBoard;
}

/*void Player::setBoard(std::vector<Card*> newBoard)
{
	this->Board = newBoard;
}*/