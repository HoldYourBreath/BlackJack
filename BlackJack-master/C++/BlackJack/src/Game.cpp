#include "Game.h"

Game::Game()
{
  //ctor
  p_card_deck = new CardDeck();
}

Game::~Game()
{
  //dtor
  delete p_card_deck;
}




