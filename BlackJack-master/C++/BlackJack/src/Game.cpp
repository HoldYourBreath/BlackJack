#include "Game.h"

Game::Game()
{
  //ctor
  //p_card_deck = new CardDeck();
  p_dealer = new Player();
  p_player1 = new Player();
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
        while(!surrender)
   {
    std::vector<char> response;
    std::string input;
    Clear();
    std::cout << "|==============================================|\n";
    std::cout << " B-Bet\n";
    std::cout << " D-Deal\n";
    std::cout << " S-Stand\n";
    std::cout << " Q-Surrender\n";
    while (getline(std::cin, input) && input.empty())
    {
    std::cout << "\n  Please give a command.\n"
                << "  Give your command: ";
    }
    for(char& c : input)
    {
    if (!isspace(c))
      {
      response.push_back(c);
      }
    }
  UiEvent(response);
   }
}
void Game::UiEvent(std::vector<char> event)
{
   if (event.size() > 0)
   {
    switch(event.at(0))
    {
    case 'B' :
      {
       break;
      }
    case 'D' :
      {
      //Player* p_player1;

        //std::cout << std::vector<Card*> cardsinhand = draw.ShowHand() << std::endl;
        //std::cout << "  Hand: " << HandToString(p_player1->ShowHand()) << std::endl;
        //DrawCard();
        CardDeck shuffledeck;
        shuffledeck.Shuffle();
        topcard = shuffledeck.GetCardOnTop();
        if (p_player1->GetNrOfCardsInHand() == 0)
        {
          p_player1->DrawCard();


          //std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
          std::cout << p_player1->ShowHand() << std::endl;
          std::cout << "Press ENTER to continue...";
          std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
          p_player1->DrawCard();
          //std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        else
        {
          p_player1->DrawCard();
          std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        break;
      }
    case 'S' :
      {
        break;
      }
    case 'Q' :
      {
        surrender = true;
        std::cout << "Bye bye" << std::endl;
        std::cout << "Press ENTER to continue...";
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
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




