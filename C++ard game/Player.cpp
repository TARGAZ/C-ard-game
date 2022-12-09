#include "Player.hpp"

void Player::player_turn()
{

}
void Player::set_champion(Champion champion)
{
	champion = champion;
}


int Player::get_money(int nbround, int starting_money)//nbround vient de la classe Game
{
	int var = 0;
	if (nbround == 0)//round 0 - Attribution initiale des pièces (varie selon le champion)
		var = starting_money;
	else if (var < 10)//reste des rounds, ajout d'une pièce par round dans la limite de 10 pièces.
		var = money + 1;
	else//cas où le joueur a plus de 10 pièces, il n'en gagne pas d'autres.
		var = money;
	money = var;
}

