#ifndef _GAME_H
#define _GAME_H

#include <vector>
#include <iostream>
#include "Player.hpp"

class Game {
private:
	int nb_round;
	std::vector<Player*> leaderboard;
	Player player;
	int opponent;

public:
	Game()
	{
		nb_round = 0;
		opponent = 0;
	}

	~Game()
	{
		leaderboard.clear();
	}

	void game_menus();

	void draw_title();

	void main_game();

	void which_fighter();

	int get_nb_round();

};

#endif //_GAME_H