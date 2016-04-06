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
};

#endif // PLAYER_H
