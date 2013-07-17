#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <string>

struct GameStructure
{
  // Player initial values
  std::string player_card_one_picture;
  std::string player_card_two_picture;
  int    player_card_one_value;
  int    player_card_two_value;

  // Dealer initial values
  std::string dealer_card_one_picture;
  int    dealer_card_one_value;
};

class Blackjack
{
    public:
        Blackjack();
        std::string createCard();

    private:
        short int generateRandomCardNumber();
        std::string cardNumberToString(short int card_number);
        std::string generateRandomCardSuit();
};

#endif