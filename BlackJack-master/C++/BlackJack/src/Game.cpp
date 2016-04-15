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

void Game::StartGameUI()
{
    Clear();
    std::cout << "|==============================================|\n";
    std::cout << " D-Draw a card\n";
    std::cout << " S-Stay\n";

}
void Game::UiEvent(std::vector<char> event)
{
   if (event.size() > 0)
   {
    switch(event.at(0))
    {
    case 'D' :
      {
        //Player* p_player1;
        p_player1->DrawCard();

        //std::cout << std::vector<Card*> cardsinhand = draw.ShowHand() << std::endl;
        //std::cout << "  Hand: " << HandToString(p_player1->ShowHand()) << std::endl;
        break;
      }
    case 'S' :
      {


        break;
      }
    }
   }
}

void Game::Clear()
{
  //Never use system, unsafe and resource hungry!!!!
  std::system("CLS");
}


