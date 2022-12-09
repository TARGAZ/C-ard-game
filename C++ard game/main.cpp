
#include "Player.hpp"
#include "Champion.hpp"
#include "Card.hpp"
#include "Effect.hpp"
#include "Game.hpp"
#include <iostream>

int main()
{
	Game game = Game();
	Champion champion = Champion();
	Effect effect = Effect();
	Card card = Card();
	Player player = Player();

	std::string playername;
	
	std::cout << "   _____                        _    _____                      " << "\n";
	std::cout << "  / ____|_     _               | |  / ____|                     " << "\n";
	std::cout << " | |   _| |_ _| |_ __ _ _ __ __| | | |  __  __ _ _ __ ___   ___ " << "\n";
	std::cout << " | |  |_   _|_   _/ _` | '__/ _` | | | |_ |/ _` | '_ ` _ \\ / _ \\" << "\n";
	std::cout << " | |____|_|   |_|| (_| | | | (_| | | |__| | (_| | | | | | |  __/" << "\n";
	std::cout << "  \\_____|         \\__,_|_|  \\__,_|  \\_____|\\__,_|_| |_| |_|\\___|" << std::endl;

	std::cout << "\n Bienvenue dans C++ard Game ! Quel est votre nom ?" << std::endl;
	std::cin >> playername;
	return 0;
}