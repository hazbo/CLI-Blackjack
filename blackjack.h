#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <string>

struct GameStructure
{
  // Player initial values
  std::string player_card_one_picture;
  std::string player_card_two_picture;
  int 	 player_card_one_value;
  int 	 player_card_two_value;

  // Dealer initial values
  std::string dealer_card_one_picture;
  int 	 dealer_card_one_value;
};

class Blackjack
{
	public:
		Blackjack();
		int generateRandomCardNumber();
		std::string cardValueToString(int card_value);
		std::string generateRandomCardSuit();
		std::string concatCardSuitAndCardNumber(std::string card_suit, std::string card_number);
};

#endif