#include "Player.h"

Player::Player()
{
  //ctor
  //p_card_deck = new CardDeck();

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

std::vector<Card*> Player::ShowHand()
{
  return p_cards_in_hand;
}

void Player::SetUpTurn()
{

  DrawCard();
}

