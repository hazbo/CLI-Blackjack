#include <iostream>
#include <string>
#include "card.h"

Card::Card(std::string card_number, std::string card_type)
{
	// Still need to use the value passed through the card_type parameter to instantiate the correct type eg: Heart/Diamond etc..
	std::cout << this->Top(card_number);
	std::cout << this->Heart();
	std::cout << this->Bottom(card_number);
}

std::string Card::Top(std::string card_number)
{
    return std::string(" _________\n/         \\\n|"+card_number+"        |\n");
}

std::string Card::Bottom(std::string card_number)
{
    return std::string("|        "+card_number+"|\n\\_________/\n\n");
}

std::string Card::Diamond()
{
    return std::string("|         |\n|   /\\    |\n|  {  }   |\n|   \\/    |\n|         |\n");
}
std::string Card::Heart()
{
    return std::string("|   _ _   |\n|  / ^ \\  |\n|  \\   /  |\n|   \\ /   |\n|    `    |\n");
}
std::string Card::Spade()
{
    return std::string("|    ,    |\n|   / \\   |\n|  (_ _)  |\n|   /_\\   |\n|         |\n");
}
std::string Card::Club()
{
    return std::string("|    _    |\n|   (_)   |\n|  (_)_)  |\n|   /_\\   |\n|         |\n");
}