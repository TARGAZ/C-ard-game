
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
	player.setBoard(draw.getCardList());
	opponent.setBoard(draw2.getCardList());
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
void Game::hit(Card* attacker, Card* adversary)
{
	if (adversary->getRefEffectCard()->getBouclier() == false)
	{
		attacker->setHp(attacker->getHp() - adversary->getDamage());
	}
	else
	{
		adversary->getRefEffectCard()->setBouclier(false);
	}
}
void Game::attack(std::vector<Card*> attacker, std::vector<Card*> adversary)
{
	int random = 0;
	bool raffale = false;
	for (int i = 0; i < attacker.size(); i++) // boucle pour raffalle de vent
	{
		if (attacker[i]->getRefEffectCard()->getRaffalle_de_vent() == true)
		{
			raffale = true;
			random = rand() % adversary.size();
			hit(attacker[i], adversary[random]);
			hit(adversary[random], attacker[i]);
		}
	}
	if (!raffale)
	{
		random = rand() % adversary.size();
		hit(attacker[0], adversary[random]);
		hit(adversary[random], attacker[0]);
	}
}

void Game::fight(Player player, Player opponent)
{
	//start of the fight
	//apply appility of the champion if he pay it in shop
	std::vector<Card*> pboard = player.getBoard();
	std::vector<Card*> oboard = opponent.getBoard();
	player_begin = false;
	int random = rand() % 2;
	int champion_ability = 0; // need to change it
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
		player_begin = true;
	}
	else if (pboard.size() < oboard.size())
	{
		//opponent start
		player_begin = false;
	}
	else
	{
		//randomise who start
		if (random == 0)
		{
			//player start
			player_begin = true;
		}
		else
		{
			//opponent start
			player_begin = false;
		}
	}

	//Do the card fight ends when one of the player has no card on board
	do
	{
		for (int i = 0; i < pboard.size(); i++)
		{
			if (pboard[i]->getHp() <= 0)
			{
				if (pboard[i]->getRefEffectCard()->getReincarnation() == true)
				{
					pboard[i]->setHp(1);
					pboard[i]->getRefEffectCard()->setReincarnation(false);
				}
				else
				{
					pboard.erase(pboard.begin());
				}
			}
		}
		for (int i = 0; i < oboard.size(); i++)
		{
			if (oboard[i]->getHp() <= 0)
			{
				if (oboard[i]->getRefEffectCard()->getReincarnation() == true)
				{
					oboard[i]->setHp(1);
					oboard[i]->getRefEffectCard()->setReincarnation(false);
				}
				else
				{
					oboard.erase(oboard.begin());
				}
			}
		}
		if (pboard.size() <= 0 || oboard.size() <= 0)
		{
			break;
		}
		if (player_begin)
		{
			attack(pboard, oboard);

		}
		if (!player_begin)
		{
			attack(oboard, pboard);
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

