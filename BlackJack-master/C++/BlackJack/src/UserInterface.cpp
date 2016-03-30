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
    std::vector<char> response;
    std::string input;
    std::cout << "|==============================================|\n";
    std::cout << "Welcome to BlackJack!\n";
    std::cout << "|==============================================|\n";
    std::cout << "N-New Game\n";
    std::cout << "S-Shuffle Deck\n";
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

void UserInterface::CreateDeck(std::vector<char> event)
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
        break;
      }
    }
   }
}

void UserInterface::StartMenuEvent(std::vector<char> event)
{
    if (event.size() > 0)
   {
    switch(event.at(0))
    {
    case 'S' :
      {
        CardDeck shuffledeck;
        shuffledeck.Shuffle();
        break;
      }
    }
   }
}

