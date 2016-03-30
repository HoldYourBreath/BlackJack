#ifndef CARD_H
#define CARD_H
#include <string>


class Card
{
    public:
        Card();
        virtual ~Card();
        void SetCardSuit(std::string type1);
        void SetCardValue(int value1);
        std::string GetCardSuit();
        int GetCardValue();
    protected:
    private:
        std::string card_suit;
        int card_value;
};

#endif // CARD_H
