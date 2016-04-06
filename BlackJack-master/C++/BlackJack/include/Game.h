#ifndef GAME_H
#define GAME_H
#include <string>
#include <vector>
#include "Card.h"
#include "CardDeck.h"

class Game
{
  public:
        Game();
        virtual ~Game();
        void Shuffle();
        void Run();
    protected:
    private:
        CardDeck* p_card_deck;
        std::string player_name;
        void GameLoop();
};

#endif // GAME_H
