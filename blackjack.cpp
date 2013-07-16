#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "blackjack.h"

Blackjack::Blackjack()
{

}

std::string Blackjack::generateRandomCardNumber()
{
	std::srand(std::time(0));
	int r = std::rand() % 52 + 1;

	// Testing output
	std::cout << r;

	return std::string("ss");
}