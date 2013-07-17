#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <string>

class Blackjack
{
	public:
		Blackjack();
		int generateRandomCardNumber();
		std::string cardValueToString(int card_value);
};

#endif