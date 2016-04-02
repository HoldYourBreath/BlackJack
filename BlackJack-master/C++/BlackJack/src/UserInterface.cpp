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
        //Create new player and deck
        p_newplayers = new Player();
        p_newgame = new Game();
        CardDeck gettopcard;
        //for (std::vector<Card*> i = gettopcard.begin(); i != gettopcard.end() ; ++i)
        for (int i = 0; i != 208 ; ++i)
        {
        topcard = gettopcard.GetCardOnTop();
        std::cout << topcard->GetCardValue() << " of " << topcard->GetCardSuit() << std::endl;
        }
        std::cout << "|==============================================|\n";
        break;
      }
    case 'S' :
      {
        CardDeck shuffledeck;
        shuffledeck.Shuffle();
        for (int i = 0; i != 208 ; ++i)
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
        break;
      }
    }
   }
}

