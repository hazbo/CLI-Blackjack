#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "blackjack.h"

Blackjack::Blackjack()
{
    GameStructure game_structure;

    int value        = generateRandomCardNumber();
    std::string suit = generateRandomCardSuit();
    std::string concat_card_value = concatCardSuitAndCardNumber(suit, cardValueToString(value));

    usleep(10000);

    //game_structure.player_card_one_value = player_card_one_value;
    //game_structure.dealer_card_one_value = generateRandomCardNumber();
}

int Blackjack::generateRandomCardNumber()
{
    std::srand(std::time(0));
    int r = std::rand() % 13 + 1;
    return r;
}

std::string Blackjack::cardValueToString(int card_value)
{
    std::ostringstream s;
    s << card_value;
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

std::string Blackjack::concatCardSuitAndCardNumber(std::string card_suit, std::string card_number)
{
    std::string concat = std::string(card_suit) + card_number;
    return concat;
}