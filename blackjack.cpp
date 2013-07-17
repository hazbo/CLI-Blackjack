#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "blackjack.h"

Blackjack::Blackjack()
{
	GameStructure game_structure;

	game_structure.player_card_one_value = generateRandomCardNumber();
	game_structure.dealer_card_one_value = generateRandomCardNumber();
}

int Blackjack::generateRandomCardNumber()
{
	std::srand(std::time(0));
	int r = std::rand() % 52 + 1;
	return r;
}

std::string Blackjack::cardValueToString(int card_value)
{
	std::ostringstream s;
	s << card_value;
	std::string converted(s.str());

	return std::string(s.str());
}