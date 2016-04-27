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

std::pair<std::string , int> Player::ShowHand(int i)
{

  //int j = p_cards_in_hand.size();
   //std::string tempcardsuit;
  //for (int iter = p_cards_in_hand.begin(); iter != p_cards_in_hand.end(); iter++)
  //for (unsigned i = 0; i != j; i++)
  //{
//Card* p_first_card = p_cards_in_hand.front();


  //int tempcardval;
  show.first = p_cards_in_hand.at(i)->GetCardSuit();
  show.second = p_cards_in_hand.at(i)->GetCardValue();

  //}
  //return tempcardsuit;
  return std::make_pair(show.first, show.second);
}

int Player::GetNrOfCardsInHand()
{
 //return p_cards_in_hand.size();
 return 0;
}

