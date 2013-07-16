#include <iostream>
#include <string>
#include "card.h"

Card::Card()
{

}

std::string Card::getCard(std::string card_identifier)
{
	return card_identifier;
}

std::string Card::D1()
{
	return std::string(" ___\n|A  |\n| /\\|\n|_\\/|");
}