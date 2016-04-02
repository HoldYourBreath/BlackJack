#ifndef CARDDECK_H
#define CARDDECK_H
#include "Card.h"
#include <string>
#include <sstream>
#include <vector>
#include <random>
#include <ctime>
#include <iostream>

class CardDeck
{
    public:
        CardDeck();
        void AddCard(Card* p_card);
        Card* GetCardOnTop();
        void Shuffle();
        bool IsEmpty();
        virtual ~CardDeck();
    protected:
    private:
        std::vector<Card*> cards;

        Card* p_card_two_of_hearts;
        Card* p_card_three_of_hearts;
        Card* p_card_four_of_hearts;
        Card* p_card_five_of_hearts;
        Card* p_card_six_of_hearts;
        Card* p_card_seven_of_hearts;
        Card* p_card_eight_of_hearts;
        Card* p_card_nine_of_hearts;
        Card* p_card_ten_of_hearts;
        Card* p_card_jack_of_hearts;
        Card* p_card_queen_of_hearts;
        Card* p_card_king_of_hearts;
        Card* p_card_ace_of_hearts;

        Card* p_card_two_of_spades;
        Card* p_card_three_of_spades;
        Card* p_card_four_of_spades;
        Card* p_card_five_of_spades;
        Card* p_card_six_of_spades;
        Card* p_card_seven_of_spades;
        Card* p_card_eight_of_spades;
        Card* p_card_nine_of_spades;
        Card* p_card_ten_of_spades;
        Card* p_card_jack_of_spades;
        Card* p_card_queen_of_spades;
        Card* p_card_king_of_spades;
        Card* p_card_ace_of_spades;

        Card* p_card_two_of_clubs;
        Card* p_card_three_of_clubs;
        Card* p_card_four_of_clubs;
        Card* p_card_five_of_clubs;
        Card* p_card_six_of_clubs;
        Card* p_card_seven_of_clubs;
        Card* p_card_eight_of_clubs;
        Card* p_card_nine_of_clubs;
        Card* p_card_ten_of_clubs;
        Card* p_card_jack_of_clubs;
        Card* p_card_queen_of_clubs;
        Card* p_card_king_of_clubs;
        Card* p_card_ace_of_clubs;

        Card* p_card_two_of_diamonds;
        Card* p_card_three_of_diamonds;
        Card* p_card_four_of_diamonds;
        Card* p_card_five_of_diamonds;
        Card* p_card_six_of_diamonds;
        Card* p_card_seven_of_diamonds;
        Card* p_card_eight_of_diamonds;
        Card* p_card_nine_of_diamonds;
        Card* p_card_ten_of_diamonds;
        Card* p_card_jack_of_diamonds;
        Card* p_card_queen_of_diamonds;
        Card* p_card_king_of_diamonds;
        Card* p_card_ace_of_diamonds;

};

#endif // CARDDECK_H
