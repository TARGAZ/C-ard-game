
#include "Game.hpp"
#include <iostream>



void Game::main_game()
{
	srand((unsigned)time(0));

	Player player = Player();
	Player opponent = Player();
	Draw draw = Draw();
	Draw draw2 = Draw();
	draw.CreateCardList();
	draw2.CreateCardList();
	player.setBoard(draw.getCardList(), player);
	opponent.setBoard(draw2.getCardList(), opponent);
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
	fight(player, opponent);

	std::cout << "fin du tour" << std::endl;
}
void Game::startRound()
{

}

void Game::openShop()
{

}

void Game::fight(Player player, Player opponent)
{
	//start of the fight
	//apply appility of the champion if he pay it in shop
	std::vector<Card*> pboard = player.getBoard();
	std::vector<Card*> oboard = opponent.getBoard();
	bool player_begin = false;
	int random = rand() % 2;
	int champion_ability = 0; // need to chnage it
	if (champion_ability == 1)
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
		random = rand() % oboard.size();
		oboard[random]->setHp(oboard[random]->getHp() - pboard[0]->getDamage());
		player_begin = true;
	}
	else if (pboard.size() < oboard.size())
	{
		//opponent start
		random = rand() % pboard.size();
		pboard[random]->setHp(pboard[random]->getHp() - oboard[0]->getDamage());
		player_begin = false;
	}
	else
	{
		//randomise who start

		if (random == 0)
		{
			//player start
			random = rand() % oboard.size();
			oboard[random]->setHp(oboard[random]->getHp() - pboard[0]->getDamage());
			//pboard[0]->setHp(pboard[0]->getHp() - oboard[random]->getDamage());
			player_begin = true;
		}
		else
		{
			//opponent start
			random = rand() % pboard.size();
			pboard[random]->setHp(pboard[random]->getHp() - oboard[0]->getDamage());
			//oboard[0]->setHp(oboard[0]->getHp() - pboard[random]->getDamage());
			player_begin = false;
		}
	}

	//Do the card fight ends when one of the player has no card on board
	do
	{
		//delete the first element of the board if hp <= 0
		if (pboard[random]->getHp() <= 0)
		{
			auto p = pboard.begin() + random;
			pboard.erase(p);

		}
		if (oboard[random]->getHp() <= 0)
		{
			auto p = oboard.begin() + random;
			oboard.erase(p);
		}
		if (pboard.size() <= 0 || oboard.size() <= 0)
		{
			break;
		}
		if (player_begin)
		{
			random = rand() % pboard.size();
			pboard[random]->setHp(pboard[random]->getHp() - oboard[0]->getDamage());
			//oboard[0]->setHp(oboard[0]->getHp() - pboard[random]->getDamage());

		}
		if (!player_begin)
		{
			random = rand() % oboard.size();
			oboard[random]->setHp(oboard[random]->getHp() - pboard[0]->getDamage());
			//pboard[0]->setHp(pboard[0]->getHp() - oboard[random]->getDamage());
		}
		player_begin = !player_begin;
	} while (pboard.size() >= 0 || oboard.size() >= 0);

	//calculate the damage to apply to the opponant
	if (pboard.size() <= 0)
	{
		//opponent win
		//apply the damage to the opponent
		int damage = 1;
		for (int i = 0; i < oboard.size(); i++)
		{
			damage += oboard[i]->getCost();
		}
		//player.setChampionHp(player.getChampionHp() - damage);
	}
	else
	{
		//player win
		//apply the damage to the player
		int damage = 1;
		for (int i = 0; i < pboard.size(); i++)
		{
			damage += pboard[i]->getCost();
		}
		//opponent.setChampionHp(opponent.getChampionHp() - damage);
	}
	//apply card end fight ability


	//ends of the fight

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

