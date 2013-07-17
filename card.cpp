#include <iostream>
#include <string>
#include "card.h"

Card::Card()
{

}

std::string Card::getCard(std::string card_identifier)
{
    return card_identifier;
}

std::string Card::D1()
{
    return std::string(" ___\n|A  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D2()
{
    return std::string(" ___\n|2  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D3()
{
    return std::string(" ___\n|3  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D4()
{
    return std::string(" ___\n|4  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D5()
{
    return std::string(" ___\n|5  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D6()
{
    return std::string(" ___\n|6  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D7()
{
    return std::string(" ___\n|7  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D8()
{
    return std::string(" ___\n|8  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D9()
{
    return std::string(" ___\n|9  |\n| /\\|\n|_\\/|\n");
}

std::string Card::D10()
{
    return std::string(" ___\n|10 |\n| /\\|\n|_\\/|\n");
}