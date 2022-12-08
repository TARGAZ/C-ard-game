/**
 * Project Untitled
 */


#ifndef _GAME_H
#define _GAME_H

#include <vector>
#include "Player.hpp"

class Game {
public:

	void main_game();

	void which_fighter();
private:
	int nb_round;
	std::vector<Player> leaderboard;
	int opponent;
};

#endif //_GAME_H