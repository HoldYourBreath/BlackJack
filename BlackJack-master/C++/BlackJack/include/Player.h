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
        //std::vector<Card*> ShowHand();
        std::pair<std::string , int> ShowHand();
        int GetNrOfCardsInHand();
    protected:
    private:
        std::string player_name;
        std::vector<Card*> p_cards_in_hand;
        CardDeck* p_card_deck;
        std::pair< std::string, int> show;


};

#endif // PLAYER_H
