#include <iostream>
#include <string>
#include "blackjack.h"
#include "card.h"

int main()
{
  Blackjack Game;
  Card newCard;

  // 3 of diamonds
  std::cout << newCard.Top("3");
  std::cout << newCard.Diamond();
  std::cout << newCard.Bottom("3");

  // Ace of hearts
  std::cout << newCard.Top("A");
  std::cout << newCard.Heart();
  std::cout << newCard.Bottom("A");

  // 9 of spades
  std::cout << newCard.Top("9");
  std::cout << newCard.Spade();
  std::cout << newCard.Bottom("9");

  // Jack of clubs
  std::cout << newCard.Top("J");
  std::cout << newCard.Club();
  std::cout << newCard.Bottom("J");

  // For testing, we will output the Ace, 5, 6 and 10 of diamonds
  // Just for the crack
  // std::cout << newCard.D5();
  // std::cout << newCard.D6();
  // std::cout << newCard.D1();
  // std::cout << newCard.D10();

  return 0;
}