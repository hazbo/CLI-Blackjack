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
        std::string D4();
        std::string D5();
        std::string D6();
        std::string D7();
        std::string D8();
        std::string D9();
        std::string D10();
};

#endif