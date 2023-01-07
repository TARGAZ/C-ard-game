
#include "Game.hpp"
#include <iostream>



void Game::main_game()
{
	srand((unsigned)time(0));

	Player player = Player();
	Player opponent = Player();
	Draw draw = Draw();
	//Draw draw2 = Draw();
	draw.CreateCardList();
	//std::vector<Card*> all_card = draw.getCardList();
	//draw2.CreateCardList();
	/*player.setBoard(draw.getCardList(), player);
	player.setShop(draw.getCardList(), player);
	opponent.setBoard(draw2.getCardList(), opponent);*/
	game_menus();

	player.set_champion();
	opponent.set_champion_automaticly();

	while (1)
	{
		startRound(player);


		openShop(player, draw);
		openShop(opponent, draw);

		fight(player, opponent);
		//downgradePlayer(loser);
		std::cout << "fin du round" << std::endl;
	}

	std::cout << "fin du jeu" << std::endl;
}
void Game::startRound(Player& player)
{
	nb_round = nb_round + 1;
	int cost_taverne = player.get_cost_levelup(player);
	if (cost_taverne != 0) {
		player.set_cost_levelup(cost_taverne - 1);
	}
	if (nb_round < 9) {
		player.set_money(2 + nb_round);
	}
	else {
		player.set_money(10);
	}

}

void Game::openShop(Player& player, Draw draw)
{
	//Initialisation
	std::vector<Card*> pboard = player.getBoard();
	std::vector<Card*> pHand = player.getHand();
	std::vector<Card*> pShop = player.getShop();
	int freeze = player.get_freeze(player);
	int level = player.get_level(player);
	int money = 50;//player.get_money(player);
	int cost_level_up = player.get_cost_levelup(player);
	std::vector<Card*> possible_card = draw.get_possible_card(draw.getCardList(), level);


	//creation du premier shop
	if (freeze == 1) {
		if (pShop.size() != 3) {
			//add the rest
		}
	}
	else {
		pShop = draw.pick_possible_card(possible_card, 3);
	}
	int answer = 0;
	int go_out = 0;
	while (1) {
		//affichage du shop
		system("cls");
		std::cout << "					SHOP			" << std::endl << std::endl;
		//Money
		std::cout << "    Money:   " << money << "          PRESS 1: REROLL SHOP" << "          PRESS 2: FREEZE SHOP : ";
		if (freeze == 1) {
			std::cout << "ACTIVATED";
		}
		else {
			std::cout << "DESCTIVATED";
		}
		std::cout << "          PRESS 666: END PHASE SHOP" << std::endl << std::endl;
		//Niveau
		std::cout << "Actual Level:   " << level;
		//Attention a la condition si on ne peut plu
		if (level == 4) {
			std::cout << std::endl << std::endl;
		}
		else {
			std::cout << "			PRESS 3: COST UPGRADE Level:   " << cost_level_up << std::endl << std::endl;
		}
		//Card in the shop
		for (int i = 0; i < pShop.size(); i++) {
			std::cout << "PRESS " << (i + 4) << ":   " << pShop[i]->getName() << std::endl;
			std::cout << "               DAMAGE:" << pShop[i]->getDamage() << "   HP:" << pShop[i]->getHp() << std::endl;
		}
		//Board
		std::cout << std::endl << "					BOARD			" << std::endl;
		for (int i = 0; i < pboard.size(); i++) {
			std::cout << (i + 1) << ":   " << pboard[i]->getName() << std::endl;
			std::cout << "               DAMAGE:" << pboard[i]->getDamage() << "   HP:" << pboard[i]->getHp() << std::endl;
		}
		//Hand
		std::cout << std::endl << "					HAND			" << std::endl;
		for (int i = 0; i < pHand.size(); i++) {
			std::cout << (i+1) << ":   " << pHand[i]->getName() << std::endl;
			std::cout <<  "               DAMAGE:" << pHand[i]->getDamage() << "   HP:" << pHand[i]->getHp() << std::endl << std::endl;
		}

		//Gestion des différents choix
		answer = 0;
		std::cin >> answer;
		switch (answer) {
		case 666://exit shop
			go_out = 1;
			break;
		case 1:// REROLL shop
			if (money >= 1) {
				money = money - 1;
				possible_card = draw.get_possible_card(draw.getCardList(), level);
				pShop = draw.pick_possible_card(possible_card, 3);
			}
			break;
		case 2:// FREEZE shop
			player.change_freeze();
			freeze = player.get_freeze(player);
			break;
		case 3:// UPGRADE shop
			if (level != 4) {
				if (money >= cost_level_up) {
					money = money - cost_level_up;
					player.set_cost_levelup(5);
					player.upgrade_level();
					level = player.get_level(player);
				}
			}
			break;
		case 4:// Achat crea 1
			if (money >= 3) {
				if (pHand.size() != 6) {
					money = money - 3;
					Card* card = new Card(*pShop[0]);
					pHand.push_back(card);
					pShop.erase(pShop.begin());
				}
			}
			break;
		case 5:// Achat crea 2
			if (money >= 3) {
				if (pHand.size() != 6) {
					money = money - 3;
					Card* card = new Card(*pShop[1]);
					pHand.push_back(card);
					pShop.erase(pShop.begin() + 1);
				}
			}
			break;
		case 6:// Achat crea 3
			if (money >= 3) {
				if (pHand.size() != 6) {
					money = money - 3;
					Card* card = new Card(*pShop[2]);
					pHand.push_back(card);
					pShop.erase(pShop.begin()+2);
				}
			}
			break;
		case 7:// POS crea
			answer = 0;
			std::cin >> answer;
			if (pboard.size() < 4) {
				if (0 < answer < 7) {
					Card* card = new Card(*pHand[answer - 1]);
					pboard.push_back(card);
					pHand.erase(pHand.begin() + (answer - 1));
				}
			}
			break;
		case 8:// ROTATE CREA
			answer = 0;
			std::cin >> answer;
			if (0 < answer < 5) {
				int first = 0;
				first = answer;
				answer = 0;
				std::cin >> answer;
				if (0 < answer < 5) {
					int second = 0;
					second = answer;
					Card* card_first = new Card(*pboard[first - 1]);
					*pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(first) - 1] = *pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(second) - 1];
					*pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(second) - 1] = *card_first;
				}
			}
			break;
		case 9:// SELL CREA
			answer = 0;
			std::cin >> answer;
			if (0 < answer < 4) {
				pboard.erase(pboard.begin() + (answer - 1));
				money = money + 1;
			}
			break;

		default:
			break;
		}
		if (go_out != 0) {
			break;
		}

	}
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
	int card_ability = 0; // need to change it
	if (card_ability == 1)
	{
		//apply the ability in the card class
	}
	//start with the player with the most card on board or randomise who start
	if (pboard.size() > oboard.size())
	{
		//player start

		oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
		pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
		player_begin = true;
	}
	else if (pboard.size() < oboard.size())
	{
		//opponent start

		pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
		oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
		player_begin = false;
	}
	else
	{
		//randomise who start

		if (random == 0)
		{
			//player start

			oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
			pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
			player_begin = true;
		}
		else
		{
			//opponent start

			pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
			oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
			player_begin = false;
		}
	}

	//Do the card fight ends when one of the player has no card on board
	do
	{
		//delete the first element of the board if hp <= 0
		if (pboard[0]->getHp() <= 0)
		{
			pboard.erase(pboard.begin());

		}
		if (oboard[0]->getHp() <= 0)
		{
			oboard.erase(oboard.begin());
		}
		if (pboard.size() <= 0 || oboard.size() <= 0)
		{
			break;
		}
		if (player_begin)
		{
			pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
			oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());

		}
		if (!player_begin)
		{
			oboard[0]->setHp(oboard[0]->getHp() - pboard[0]->getDamage());
			pboard[0]->setHp(pboard[0]->getHp() - oboard[0]->getDamage());
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
	//nb_round++;
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

