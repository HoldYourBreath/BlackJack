#include "UserInterface.h"
#include "CardDeck.h"
#include "Game.h"
#include "Player.h"

UserInterface::UserInterface()
{
    //ctor
}

UserInterface::~UserInterface()
{
    //dtor
}


void UserInterface::StartUserInterface()
{
    std::cout << "|==============================================|\n";
    std::cout << "Welcome to BlackJack!\n";
    std::cout << "|==============================================|\n";
    while(!gameover)
   {
    std::vector<char> response;
    std::string input;
    std::cout << "Make your choice:\n";
    std::cout << " N-New\n";
    std::cout << " S-Shuffle Deck\n";
    std::cout << " Q-Quit\n";
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
 StartMenuEvent(response);
   }
}

void UserInterface::StartMenuEvent(std::vector<char> event)
{

    if (event.size() > 0)
   {
    switch(event.at(0))
    {
    case 'N' :
      {
        //Create new player and deck(s)
        p_newplayers = new Player();
        p_newgame = new Game();
        CardDeck my_card_deck;
        int maxnrofcardsindeck = my_card_deck.GetNrOfCardsInDeck();
        for (int i = 0; i != maxnrofcardsindeck; ++i)
        {
        topcard = my_card_deck.GetCardOnTop();
        std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        std::cout << "|==============================================|\n";
        break;
      }
    case 'S' :
      {
        CardDeck shuffledeck;
        shuffledeck.Shuffle();
        int maxnrofcardsindeck = shuffledeck.GetNrOfCardsInDeck();
        for (int i = 0; i != maxnrofcardsindeck; ++i)
        {
        topcard = shuffledeck.GetCardOnTop();
        std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        std::cout << "|==============================================|\n";
        break;
      }
    case 'Q' :
      {
        gameover = true;
        std::cout << "Bye bye" << std::endl;
        std::cout << "Press ENTER to continue...";
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        break;
      }
    }
   }
}

