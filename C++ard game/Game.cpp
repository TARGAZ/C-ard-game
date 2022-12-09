
#include "Game.hpp"
#include <iostream>



void Game::main_game()
{
	Player& loser = player;

	game_menus();

	player.set_champion();
	opponent.set_champion_automaticly();

	while (1)
	{
		startRound();


		openShop();

		loser = fight();
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
	return player;
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

