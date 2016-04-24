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

std::string Player::ShowHand()
{

 // for (auto iter = p_cards_in_hand.begin(); iter != p_cards_in_hand.end(); iter++)
  //for (int i = 0; i != p_cards_in_hand.size(); i++)
  {
//Card* p_first_card = p_cards_in_hand.front();

  std::string tempcardsuit;
  //int tempcardval;
  tempcardsuit = p_cards_in_hand.at(0)->GetCardSuit();
  //tempcardval = p_cards_in_hand.at(0)->GetCardValue();


  return tempcardsuit;
  }
}

int Player::GetNrOfCardsInHand()
{
 //return p_cards_in_hand.size();
 return 0;
}

