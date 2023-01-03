#include "Draw.hpp"
#include "Player.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>



void Draw::BuyPhase()
{

}

void Draw::CreateCardList()
{
	std::string const file_name("carddata.txt");
	std::ifstream file;
	file.open(file_name);
	if (file.fail())
	{
		std::cout << "file opening failed" << std::endl;
	}
	std::string line;
	std::string name;
	int damage;
	int hp;
	int type;
	int cost;
	int level;
	bool bouclier;
	bool raffale_de_vent;
	bool provocation;
	bool réincarnation;
	bool rale_agony;
	bool cri_de_guerre;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string token;
		if (line == "-")
		{
			return;
		}
		std::getline(ss, token, ',');
		name = token;
		std::getline(ss, token, ',');
		damage = std::stoi(token);
		std::getline(ss, token, ',');
		hp = std::stoi(token);
		std::getline(ss, token, ',');
		type = std::stoi(token);
		std::getline(ss, token, ',');
		cost = std::stoi(token);
		std::getline(ss, token, ',');
		level = std::stoi(token);
		std::getline(ss, token, ',');
		bouclier = std::stoi(token);
		std::getline(ss, token, ',');
		raffale_de_vent = std::stoi(token);
		std::getline(ss, token, ',');
		provocation = std::stoi(token);
		std::getline(ss, token, ',');
		réincarnation = std::stoi(token);
		std::getline(ss, token, ',');
		rale_agony = std::stoi(token);
		std::getline(ss, token, ',');
		cri_de_guerre = std::stoi(token);
		Card* card = new Card(name, damage, hp, type, cost, level, bouclier, raffale_de_vent, provocation, réincarnation, rale_agony, cri_de_guerre);
		all_card.push_back(card);
		nb_card++;
	}
}


