#include <iostream>
#include <string>
#include "blackjack.h"
#include "card.h"

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

int main()
{
	Blackjack Game;
	GameStructure game_structure;

	// TODO: these values will be the same, change them
	game_structure.player_card_one_value = Game.generateRandomCardNumber();
	game_structure.dealer_card_one_value = Game.generateRandomCardNumber();

	return 0;
}