#include "Game.h"

Game::Game()
{
  //ctor
  //p_card_deck = new CardDeck();
  players.push_back(p_dealer);
  players.push_back(p_player1);
  //players.push_back(p_player2);
}

Game::~Game()
{
  //dtor
  delete p_card_deck;
}




