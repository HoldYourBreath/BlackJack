#include "Player.h"



Player::Player()
{
  //ctor
  p_card_deck = new CardDeck();
  player_name = "Player 1";

}

Player::~Player()
{
  //dtor
  delete p_card_deck;
}

void Player::DrawCard()
{
  Card* p_temp_card;
  p_temp_card = p_card_deck->GetCardOnTop();
  if(p_temp_card)
  {
  p_cards_in_hand.push_back(p_temp_card);
  }
}
/*
Player::PrintHand()
{

}
*/
/*
std::vector<Card> Player::ShowHand()
{
  return p_cards_in_hand;
}
*/

//std::pair<std::string , int> Player::ShowHand(int i)
std::tuple<std::string , std::string, int> Player::ShowHand(int i)
{
  //int j = p_cards_in_hand.size();
   //std::string tempcardsuit;
  //for (int iter = p_cards_in_hand.begin(); iter != p_cards_in_hand.end(); iter++)
  //for (unsigned i = 0; i != j; i++)
  //{
//Card* p_first_card = p_cards_in_hand.front();
  //int tempcardval;
  auto first = p_cards_in_hand.at(i)->GetCardSuit();
  auto second = p_cards_in_hand.at(i)->GetCardName();
  auto third = p_cards_in_hand.at(i)->GetCardValue();

  //}
  //return tempcardsuit;
  //return std::make_tuple(std::get<0>(show), std::get<1>(show), std::get<2>(show));
  return std::make_tuple(first, second, third);
}

int Player::GetNrOfCardsInHand()
{
 return p_cards_in_hand.size();
 //return 0;
}

