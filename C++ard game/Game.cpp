
#include "Game.hpp"
#include <iostream>



void Game::main_game()
{
	Player& loser = player;

	game_menus();

	//championChoice();
	//player.set_champion();

	while (1)
	{
		startRound();


		openShop();

		loser = fight();
		downgradePlayer(loser);
	}




}
void Game::startRound()
{

}

void Game::openShop()
{

}

Player Game::fight()
{
	//start of the fight
	//apply appility of the champion if he pay it in shop
	int champoin_ability = 0; // need to chnage it
	if (champoin_ability == 1)
	{
		//apply the ability in the champion class
	}

	//apply card effect if there is start fight ability
	int card_ability = 0; // need to chnage it
	if (card_ability == 1)
	{
		//apply the ability in the card class
	}
	
	//start with the player with the most card on board or randomise who start
	if (player.getBoard().size() > opponent.getBoard().size())
	{
		//player start
	}
	else if (player.getBoard().size() < opponent.getBoard().size())
	{
		//opponent start
	}
	else
	{
		//randomise who start
	}
	
	//Do the card fight ends when one of the player has no card on board


	//calculate the damage to apply to the opponant

	
	//apply card end fight ability

	
	//ends of the fight
	return player;
}

void Game::downgradePlayer(Player loser)
{

}

void Game::which_fighter()
{

}

void Game::game_menus()
{
	draw_title();
	std::cout << "\n Bienvenue dans C++ard Game ! Quel est votre nom ?" << std::endl;

	std::string playername;
	std::cin >> playername;
	player = Player(playername);
	nb_round++;
}

void Game::draw_title()
{
	std::cout << "   _____                        _    _____                      " << "\n";
	std::cout << "  / ____|_     _               | |  / ____|                     " << "\n";
	std::cout << " | |   _| |_ _| |_ __ _ _ __ __| | | |  __  __ _ _ __ ___   ___ " << "\n";
	std::cout << " | |  |_   _|_   _/ _` | '__/ _` | | | |_ |/ _` | '_ ` _ \\ / _ \\" << "\n";
	std::cout << " | |____|_|   |_|| (_| | | | (_| | | |__| | (_| | | | | | |  __/" << "\n";
	std::cout << "  \\_____|         \\__,_|_|  \\__,_|  \\_____|\\__,_|_| |_| |_|\\___|" << std::endl;
}

int Game::get_nb_round()
{
	return nb_round;
}

