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
        void DrawCard();
        void Run();
        void Shuffle();
        void SetUpTurn();
        std::vector<Card*> ShowHand();
    protected:
    private:
        std::string player_name;
        std::vector<Card*> p_cards_in_hand;
        CardDeck* p_card_deck;
};

#endif // PLAYER_H
