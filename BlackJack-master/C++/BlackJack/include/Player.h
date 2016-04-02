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
        std::string player_name;
       // CardDeck card_deck;
};

#endif // PLAYER_H
