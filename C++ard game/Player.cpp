
#include "Player.hpp"

/**
 * Player implementation
 */


Champion* Player::get_champion()
{
	return &champion;
}
void Player::set_champion()
{
	champion.Validation_Champion(Champion_Proposition());
}
void Player::set_champion_automatically()
{
	champion.Validation_Champion(Find_Champion_Proposition());
	name = "Not Bob";
}

void Player::setBoard(std::vector<Card*> newBoard)
{
	Board = newBoard;
}

int Player::get_money() {
	return money;
}

void Player::set_money(int newMoney) {
	money = newMoney;
}

void Player::set_name(std::string nameof) {
	name = nameof;
}

int Player::get_freeze() {
	return freeze_shop;
}

void Player::change_freeze() {
	if (freeze_shop == 1) {
		freeze_shop = 0;
	}
	else {
		freeze_shop = 1;
	}
}

int Player::get_level() {
	return level;
}

void Player::upgrade_level() {
	level = level + 1;
}

int Player::get_cost_levelup() {
	return cost_levelup;
}

void Player::set_cost_levelup(int newCost) {
	cost_levelup = newCost;
}

std::vector<Card*> Player::getHand() {
	std::vector<Card*> rhand;
	for (int i = 0; i < Hand.size(); i++)
	{
		Card* temp = new Card(Hand[i]->getName(), Hand[i]->getDamage(), Hand[i]->getHp(), Hand[i]->getType(), Hand[i]->getCost(), Hand[i]->getLevel(), Hand[i]->getEffectCard());
		rhand.push_back(temp);
	}
	return rhand;
}

void Player::setHand(std::vector<Card*> newHand) {
	Hand = newHand;
}

std::vector<Card*> Player::getShop() {
	std::vector<Card*> rShop;
	for (int i = 0; i < Shop.size(); i++)
	{
		Card* temp = new Card(Shop[i]->getName(), Shop[i]->getDamage(), Shop[i]->getHp(), Shop[i]->getType(), Shop[i]->getCost(), Shop[i]->getLevel(), Shop[i]->getEffectCard());
		rShop.push_back(temp);
	}
	return rShop;
}

void Player::setShop(std::vector<Card*> newShop) {
	Shop = newShop;
}

std::vector<Card*> Player::getBoard() {
	std::vector<Card*> rboard;
	for (int i = 0; i < Board.size(); i++)
	{
		Card* temp = new Card(Board[i]->getName(), Board[i]->getDamage(), Board[i]->getHp(), Board[i]->getType(), Board[i]->getCost(), Board[i]->getLevel(), Board[i]->getEffectCard());
		rboard.push_back(temp);
	}
	return rboard;
}


std::string Player::get_name() {
	return name;
}