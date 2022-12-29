
#include "Game.hpp"
#include <iostream>



void Game::main_game()
{
	Player& loser = player;
	Player player = Player();
	Player opponent = Player();
	Draw draw = Draw();
	draw.CreateCardList();
	player.setBoard(draw.getCardList(), player);
	opponent.setBoard(draw.getCardList(), opponent);
	game_menus();
	//championChoice();
	//player.set_champion();

	/*while (1)
	{
		startRound();


		openShop();

		loser = fight();
		downgradePlayer(loser);
	}*/
	player = fight(player, opponent);



}
void Game::startRound()
{

}

void Game::openShop()
{

}

Player Game::fight(Player &player, Player &opponent)
{
	//start of the fight
	//apply appility of the champion if he pay it in shop
	std::vector<Card*> pboard = player.getBoard();
	std::vector<Card*> oboard = opponent.getBoard();
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
	if (pboard.size() > oboard.size())
	{
		//player start
	}
	else if (pboard.size() < oboard.size())
	{
		//opponent start
	}
	else
	{
		//randomise who start
		srand((unsigned)time(0));
		int random = rand() % 2;
		if (random == 0)
		{
			//player start
			oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
		}
		else
		{
			//opponent start
			pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
		}
	}
	
	//Do the card fight ends when one of the player has no card on board
	while (pboard.size() < 0 || oboard.size() < 0)
	{
		
	}

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

