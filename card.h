#ifndef CARD_H
#define CARD_H
#include <string>

class Card
{
    public:
        Card(std::string card_number, std::string card_type);
	private:        
        std::string Top(std::string card_number);
        std::string Bottom(std::string card_number);

        std::string Diamond();
        std::string Heart();
        std::string Spade();
        std::string Club();
};

#endif