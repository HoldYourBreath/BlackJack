#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "Card.h"
#include "CardDeck.h"

class Player
{
    public:
        Player();
        virtual ~Player();
    protected:
    private:
        Player* p_player1;
        Player* p_dealer;
        std::string player_name;
       // CardDeck card_deck;
};

#endif // PLAYER_H
