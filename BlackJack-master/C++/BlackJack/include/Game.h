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
    protected:
    private:
        CardDeck* p_card_deck;
        Game* p_player1;
        Game* p_dealer;
        std::string player_name;
       // CardDeck card_deck;
};

#endif // GAME_H
