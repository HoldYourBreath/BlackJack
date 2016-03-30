#include "CardDeck.h"

CardDeck::CardDeck()
{
    p_card_two_of_hearts = new Card();
    p_card_two_of_hearts->SetCardSuit("Hearts");
    p_card_two_of_hearts->SetCardValue(2);
    p_card_three_of_hearts = new Card();
    p_card_three_of_hearts->SetCardSuit("Hearts");
    p_card_three_of_hearts->SetCardValue(3);
    p_card_four_of_hearts = new Card();
    p_card_four_of_hearts->SetCardSuit("Hearts");
    p_card_four_of_hearts->SetCardValue(4);
    p_card_five_of_hearts = new Card();
    p_card_five_of_hearts->SetCardSuit("Hearts");
    p_card_five_of_hearts->SetCardValue(5);
    p_card_six_of_hearts = new Card();
    p_card_six_of_hearts->SetCardSuit("Hearts");
    p_card_six_of_hearts->SetCardValue(6);
    p_card_seven_of_hearts = new Card();
    p_card_seven_of_hearts->SetCardSuit("Hearts");
    p_card_seven_of_hearts->SetCardValue(7);
    p_card_eight_of_hearts = new Card();
    p_card_eight_of_hearts->SetCardSuit("Hearts");
    p_card_eight_of_hearts->SetCardValue(8);
    p_card_nine_of_hearts = new Card();
    p_card_nine_of_hearts->SetCardSuit("Hearts");
    p_card_nine_of_hearts->SetCardValue(9);
    p_card_ten_of_hearts = new Card();
    p_card_ten_of_hearts->SetCardSuit("Hearts");
    p_card_ten_of_hearts->SetCardValue(10);
    p_card_jack_of_hearts = new Card();
    p_card_jack_of_hearts->SetCardSuit("Hearts");
    p_card_jack_of_hearts->SetCardValue(11);
    p_card_queen_of_hearts = new Card();
    p_card_queen_of_hearts->SetCardSuit("Hearts");
    p_card_queen_of_hearts->SetCardValue(12);
    p_card_king_of_hearts = new Card();
    p_card_king_of_hearts->SetCardSuit("Hearts");
    p_card_king_of_hearts->SetCardValue(13);
    p_card_ace_of_hearts = new Card();
    p_card_ace_of_hearts->SetCardSuit("Hearts");
    p_card_ace_of_hearts->SetCardValue(14);

}

CardDeck::~CardDeck()
{

}

void CardDeck::Shuffle()
{
  std::vector<Card*> shuffled_deck;
  //for (std::vector<Card*>::const_iterator i = shuffled_deck.begin(); i != shuffled_deck.end(); ++i)
  //std::cout << shuffled_deck[i] << std::endl;
  std::vector<Card*> temp_deck;
  temp_deck = cards;
  int card_pos = -1;

  for(unsigned int i = 0; i < cards.size(); ++i)
  {
    //if there is more than one card to select from
    if (temp_deck.size() > 1)
    {
      card_pos = rand() % (temp_deck.size()-1);
      shuffled_deck.push_back(temp_deck.at(card_pos));
      temp_deck.erase(temp_deck.begin() + card_pos);
    }
    else
    {
      shuffled_deck.push_back(temp_deck.front());
    }
  }
  cards = shuffled_deck;
}

std::vector<Card*> cards;
        int card_deck_id;

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
