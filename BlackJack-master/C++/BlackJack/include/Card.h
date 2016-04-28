#ifndef CARD_H
#define CARD_H
#include <string>


class Card
{
    public:
        Card();
        Card(std::string* cardsuite, int* cardvalue);
        virtual ~Card();
        void SetCardSuit(std::string type1);
        void SetCardName(std::string type1);
        void SetCardValue(int value1);
        std::string GetCardSuit();
        std::string GetCardName();
        int GetCardValue();
    protected:
    private:
        std::string card_suit;
        std::string card_name;
        int card_value;
};

#endif // CARD_H
