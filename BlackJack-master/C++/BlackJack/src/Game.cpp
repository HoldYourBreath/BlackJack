#include "Game.h"

Game::Game()
{
  //ctor
  //p_card_deck = new CardDeck();
  p_dealer = new Player();
  p_player1 = new Player();
  players.push_back(p_dealer);
  players.push_back(p_player1);
  CardDeck shuffledeck;
  shuffledeck.Shuffle();
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
        //p_card_deck = new CardDeck();
        //CardDeck shuffledeck;
        //shuffledeck.Shuffle();
        //topcard = shuffledeck.GetCardOnTop();
        if (p_player1->GetNrOfCardsInHand() == 0)
        {
          p_dealer->DrawCard();
          p_dealer->DrawCard();
          p_player1->DrawCard();
          p_player1->DrawCard();
          //std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
          //std::cout << p_player1->ShowHand() << std::endl;
          std::cout << "Dealers cards\n";
          auto dealer = p_dealer->ShowHand(0);
          std::cout << std::get<1>(dealer) << " of " << std::get<0>(dealer) << std::endl;
          //std::cout << p_dealer->ShowHand(0).std::get<1> << " of " << p_dealer->ShowHand(0).std::get<0> << std::endl;
          std::cout << "|==============================================|\n";
          std::cout << "Players cards\n";
          auto player0 = p_player1->ShowHand(0);
          std::cout << std::get<1>(player0) << " of " << std::get<0>(player0) << std::endl;
          auto player1 = p_player1->ShowHand(1);
          std::cout << std::get<1>(player1) << " of " << std::get<0>(player1) << std::endl;
          //std::cout << p_player1->ShowHand(0).second << " of " << p_player1->ShowHand(0).first << std::endl;
          //std::cout << p_player1->ShowHand(1).second << " of " << p_player1->ShowHand(1).first << std::endl;
          std::cout << "Press ENTER to continue...";
          std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

          //std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        else
        {
          p_player1->DrawCard();
          std::cout << "Dealers cards\n";
          //std::cout << p_dealer->ShowHand(0).second << " of " << p_dealer->ShowHand(0).first << std::endl;
          std::cout << "|==============================================|\n";
          std::cout << "Players cards\n";
          //std::cout << p_player1->ShowHand(0).second << " of " << p_player1->ShowHand(0).first << std::endl;
          //std::cout << p_player1->ShowHand(1).second << " of " << p_player1->ShowHand(1).first << std::endl;
          //std::cout << p_player1->ShowHand(2).second << " of " << p_player1->ShowHand(2).first << std::endl;
          std::cout << "Press ENTER to continue...";
          std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
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




