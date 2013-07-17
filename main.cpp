#include <iostream>
#include <string>
#include "blackjack.h"
#include "card.h"

int main()
{
	Blackjack Game;
  Card newCard;

  // For testing, we will output the Ace, 5, 6 and 10 of diamonds
  // Just for the crack
  std::cout << newCard.D5();
  std::cout << newCard.D6();
  std::cout << newCard.D1();
  std::cout << newCard.D10();

	return 0;
}