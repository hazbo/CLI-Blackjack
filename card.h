#ifndef CARD_H
#define CARD_H
#include <string>

class Card
{
	public:
		Card();
		std::string getCard(std::string card_identifier);
		std::string D1();
		std::string D2();
		std::string D3();
};

#endif