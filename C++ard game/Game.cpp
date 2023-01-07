
#include "Game.hpp"
#include <iostream>

void Game::main_game()//Boucle principale du jeu
{
	//Initialisations
	srand((unsigned)time(0));
	Player player = Player();
	Player opponent = Player();
	Draw draw = Draw();
	draw.CreateCardList();
	
	//Création des joueurs
	game_menus(player);
	player.set_champion();
	opponent.set_champion_automatically();

	while (1)
	{
		//initialise un round, définit l'argent attribué etc
		startRound(player);

		//gestion du shop pour les 2 joueurs
		openShop(player, draw);
		openShop(opponent, draw);

		//Gestion du combat entre les 2 joueurs
		fight(player, opponent);
		
		std::cout << "fin du round" << std::endl;
	}

	std::cout << "fin du jeu" << std::endl;
}
void Game::startRound(Player& player)
{
	nb_round = nb_round + 1;//On incrémente le nombre de round
	int cost_taverne = player.get_cost_levelup(player);//on définit le cout de l'amélioration du niveau de taverne
	
	if (cost_taverne != 0)
		player.set_cost_levelup(cost_taverne - 1);
	if (nb_round < 9)
		player.set_money(2 + nb_round);
	else
		player.set_money(10);

}

void Game::openShop(Player& player, Draw draw)
{
	//Initialisation
	std::vector<Card*> pboard = player.getBoard();
	std::vector<Card*> pHand = player.getHand();
	std::vector<Card*> pShop = player.getShop();
	int freeze = player.get_freeze(player);
	int level = player.get_level(player);
	int money = player.get_money(player);
	int cost_level_up = player.get_cost_levelup(player);
	std::vector<Card*> possible_card = draw.get_possible_card(draw.getCardList(), level);
	std::string name_player = player.get_name(player);
	Champion name_champ = player.get_champion(player);
	//creation du shop
	if (freeze == 1) {
		if (pShop.size() != 3) {
			//complete the frozen shop
			pShop = draw.complete_shop_possible_card(possible_card, pShop);
		}
	}
	else {
		//put a new shop
		pShop = draw.pick_possible_card(possible_card, 3);
	}
	int answer = 0;
	std::string answerchar = "0";
	int go_out = 0;
	while (1) {
		//affichage du shop
		system("cls");
		std::cout << "					SHOP			" << name_player << ":   " << name_champ.get_name_champion() << std::endl;
		std::cout << "					    			" <<"HP:   " << name_champ.get_hp() <<"    Armor:   " << name_champ.get_armor() << std::endl << std::endl;
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
		//Tuto
		std::cout << "PRESS 7: to put crea  PRESS 8: to rotate crea   PRESS 9: to sell crea " << std::endl << std::endl;
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

		//Gestion des diff�rents choix
		answerchar = "0";
		answer = 0;
		std::cin >> answerchar;
		if (answerchar == "666") answer = 666;
		else if (answerchar == "1") answer = 1;
		else if (answerchar == "2") answer = 2;
		else if (answerchar == "3") answer = 3;
		else if (answerchar == "4") answer = 4;
		else if (answerchar == "5") answer = 5;
		else if (answerchar == "6") answer = 6;
		else if (answerchar == "7") answer = 7;
		else if (answerchar == "8") answer = 8;
		else if (answerchar == "9") answer = 9;

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
			if (pShop.size()>0) {
				if (money >= 3) {
					if (pHand.size() != 6) {
						money = money - 3;
							Card* card = new Card(*pShop[0]);
							pHand.push_back(card);
							pShop.erase(pShop.begin());
					}
				}
			}
			break;
		case 5:// Achat crea 2
			if (pShop.size() > 1) {
				if (money >= 3) {
					if (pHand.size() != 6) {
						money = money - 3;
						Card* card = new Card(*pShop[1]);
						pHand.push_back(card);
						pShop.erase(pShop.begin() + 1);
					}
				}
			}
			break;
		case 6:// Achat crea 3
			if (pShop.size() > 2) {
				if (money >= 3) {
					if (pHand.size() != 6) {
						money = money - 3;
						Card* card = new Card(*pShop[2]);
						pHand.push_back(card);
						pShop.erase(pShop.begin() + 2);
					}
				}
			}
			break;
		case 7:// POS crea
			answerchar = "0";
			answer = 0;
			std::cin >> answerchar;
			if (answerchar == "1") answer = 1;
			else if (answerchar == "2") answer = 2;
			else if (answerchar == "3") answer = 3;
			else if (answerchar == "4") answer = 4;
			else if (answerchar == "5") answer = 5;
			else if (answerchar == "6") answer = 6;
			else if (answerchar == "7") answer = 7;
			if (pboard.size() < 4) {
				if (0 < answer && answer < 7) {
					if (pHand.size() >((static_cast<unsigned long long>(answer) - 1))) {
						Card* card = new Card(*pHand[answer - 1]);
						pboard.push_back(card);
						pHand.erase(pHand.begin() + (answer - 1));
					}
				}
			}
			break;
		case 8:// ROTATE CREA
			answerchar = "0";
			answer = 0;
			std::cin >> answerchar;
			if (answerchar == "1") answer = 1;
			else if (answerchar == "2") answer = 2;
			else if (answerchar == "3") answer = 3;
			else if (answerchar == "4") answer = 4;
			else if (answerchar == "5") answer = 5;
			if (0 < answer && answer < 5) {
				int first = 0;
				first = answer;
				answerchar = "0";
				answer = 0;
				std::cin >> answerchar;
				if (answerchar == "1") answer = 1;
				else if (answerchar == "2") answer = 2;
				else if (answerchar == "3") answer = 3;
				else if (answerchar == "4") answer = 4;
				else if (answerchar == "5") answer = 5;
				if (0 < answer && answer < 5) {
					int second = 0;
					second = answer;
					if (pboard.size() > ((static_cast<unsigned long long>(first) - 1))) {
						if (pboard.size() > ((static_cast<unsigned long long>(second) - 1))) {
							Card* card_first = new Card(*pboard[first - 1]);
							*pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(first) - 1] = *pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(second) - 1];
							*pboard[static_cast<std::vector<Card*, std::allocator<Card*>>::size_type>(second) - 1] = *card_first;
						}
					}
				}
			}
			break;
		case 9:// SELL CREA
			answerchar = "0";
			answer = 0;
			std::cin >> answerchar;
			if (answerchar == "1") answer = 1;
			else if (answerchar == "2") answer = 2;
			else if (answerchar == "3") answer = 3;
			else if (answerchar == "4") answer = 4;
			else if (answerchar == "5") answer = 5;
			if (0 < answer && answer < 4) {
				if (pboard.size() > ((static_cast<unsigned long long>(answer) - 1)))
				pboard.erase(pboard.begin() + (answer - 1));
				money = money + 1;
			}
			break;

		default:
			break;
		}
		if (go_out != 0) {
			player.setShop(pShop, player);
			player.setBoard(pboard, player);
			player.setHand(pHand, player);
			break;
		}

	}
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

void Game::game_menus(Player& player)
{
	draw_title();
	std::cout << "\n Bienvenue dans C++ard Game ! Quel est votre nom ?" << std::endl;

	std::string playername;
	std::cin >> playername;
	player.set_name(playername);
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
