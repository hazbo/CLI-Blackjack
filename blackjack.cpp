#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "blackjack.h"

Blackjack::Blackjack()
{
    GameStructure game_structure;

    std::string concat_card_value = createCard();

    //usleep(10000);

    //game_structure.player_card_one_value = player_card_one_value;
    //game_structure.dealer_card_one_value = generateRandomCardNumber();
}

std::string Blackjack::createCard()
{
    short int card_number = generateRandomCardNumber();
    std::string card_suit = generateRandomCardSuit();
    return std::string(card_suit) + cardNumberToString(card_number);
}

short int Blackjack::generateRandomCardNumber()
{
    std::srand(std::time(0));
    int r = std::rand() % 13 + 1;
    return r;
}

std::string Blackjack::cardNumberToString(short int card_number)
{
    std::ostringstream s;
    s << card_number;
    std::string converted(s.str());

    return std::string(s.str());
}

std::string Blackjack::generateRandomCardSuit()
{
    srand ( time(NULL) );
    const char arrayNum[4] = {'D', 'S', 'C', 'H'};

    int RandIndex = rand() % 4;

    std::ostringstream s;
    s << arrayNum[RandIndex];
    std::string converted(s.str());

    return std::string(s.str());
}