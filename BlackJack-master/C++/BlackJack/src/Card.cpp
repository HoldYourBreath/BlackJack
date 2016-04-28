#include "Card.h"

Card::Card()
{
    //ctor
}

Card::~Card()
{
    //dtor
}
//Set functions

void Card::SetCardSuit(std::string type1)
{
  card_suit = type1;
}

void Card::SetCardValue(int value1)
{
  card_value = value1;
}

void Card::SetCardName(std::string name1)
{
  card_name = name1;
}

//Get functions
std::string Card::GetCardSuit()
{
  return card_suit;
}

std::string Card::GetCardName()
{
  return card_name;
}

int Card::GetCardValue()
{
  return card_value;
}
