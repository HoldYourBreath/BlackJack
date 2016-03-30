#include "Player.h"

Player::Player()
{
    //ctor
    p_player1 = new Player();
    player_name = "Player 1";
    p_dealer = new Player();
}

Player::~Player()
{
  //dtor
  delete p_player1;
  delete p_dealer;
}
