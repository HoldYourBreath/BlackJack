#include "Card.h"

Card::Card()
{
    //ctor
}

Card::~Card()
{
    //dtor
}

void Card::SetCardSuit(std::string type1)
{
  card_suit = type1;
}

void Card::SetCardValue(int value1)
{
  card_value = value1;
}

std::string Card::GetCardSuit()
{
  return card_suit;
}

int Card::GetCardValue()
{
  return card_value;
}
