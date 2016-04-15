#include "CardDeck.h"

CardDeck::CardDeck()
{
    for (int i = 0; i != 4; ++i) //Create 4 decks (shoe)
    {
    //ctor
    //card kortti;
    //kortti.suite = "Hearts";
    /*
    for (int i =0; i < 4; ++i)
    {
    for (int j=1; j<=13; ++j)
    {
    switch(i) {
      case 0:
        kortti.suite = "Hearts";
        kortti.value = j;
        break;
      case 1:
        kortti.suite = "Diamonds";
        kortti.value = j;
        break;
      case 2:
        kortti.suite = "Spades";
        kortti.value = j;
        break;
      case 3:
        kortti.suite = "Clubs";
        kortti.value = j;
        break;
        */

    //Hearts
    p_card_two_of_hearts = new Card();
    p_card_two_of_hearts->SetCardSuit("Hearts");
    p_card_two_of_hearts->SetCardValue(2);
    AddCard(p_card_two_of_hearts);
    p_card_three_of_hearts = new Card();
    p_card_three_of_hearts->SetCardSuit("Hearts");
    p_card_three_of_hearts->SetCardValue(3);
    AddCard(p_card_three_of_hearts);
    p_card_four_of_hearts = new Card();
    p_card_four_of_hearts->SetCardSuit("Hearts");
    p_card_four_of_hearts->SetCardValue(4);
    AddCard(p_card_four_of_hearts);
    p_card_five_of_hearts = new Card();
    p_card_five_of_hearts->SetCardSuit("Hearts");
    p_card_five_of_hearts->SetCardValue(5);
    AddCard(p_card_five_of_hearts);
    p_card_six_of_hearts = new Card();
    p_card_six_of_hearts->SetCardSuit("Hearts");
    p_card_six_of_hearts->SetCardValue(6);
    AddCard(p_card_six_of_hearts);
    p_card_seven_of_hearts = new Card();
    p_card_seven_of_hearts->SetCardSuit("Hearts");
    p_card_seven_of_hearts->SetCardValue(7);
    AddCard(p_card_seven_of_hearts);
    p_card_eight_of_hearts = new Card();
    p_card_eight_of_hearts->SetCardSuit("Hearts");
    p_card_eight_of_hearts->SetCardValue(8);
    AddCard(p_card_eight_of_hearts);
    p_card_nine_of_hearts = new Card();
    p_card_nine_of_hearts->SetCardSuit("Hearts");
    p_card_nine_of_hearts->SetCardValue(9);
    AddCard(p_card_nine_of_hearts);
    p_card_ten_of_hearts = new Card();
    p_card_ten_of_hearts->SetCardSuit("Hearts");
    p_card_ten_of_hearts->SetCardValue(10);
    AddCard(p_card_ten_of_hearts);
    p_card_jack_of_hearts = new Card();
    p_card_jack_of_hearts->SetCardSuit("Hearts");
    p_card_jack_of_hearts->SetCardValue(11);
    AddCard(p_card_jack_of_hearts);
    p_card_queen_of_hearts = new Card();
    p_card_queen_of_hearts->SetCardSuit("Hearts");
    p_card_queen_of_hearts->SetCardValue(12);
    AddCard(p_card_queen_of_hearts);
    p_card_king_of_hearts = new Card();
    p_card_king_of_hearts->SetCardSuit("Hearts");
    p_card_king_of_hearts->SetCardValue(13);
    AddCard(p_card_king_of_hearts);
    p_card_ace_of_hearts = new Card();
    p_card_ace_of_hearts->SetCardSuit("Hearts");
    p_card_ace_of_hearts->SetCardValue(14);
    AddCard(p_card_ace_of_hearts);

    //Spades
    p_card_two_of_spades = new Card();
    p_card_two_of_spades->SetCardSuit("Spades");
    p_card_two_of_spades->SetCardValue(2);
    AddCard(p_card_two_of_spades);
    p_card_three_of_spades = new Card();
    p_card_three_of_spades->SetCardSuit("Spades");
    p_card_three_of_spades->SetCardValue(3);
    AddCard(p_card_three_of_spades);
    p_card_four_of_spades = new Card();
    p_card_four_of_spades->SetCardSuit("Spades");
    p_card_four_of_spades->SetCardValue(4);
    AddCard(p_card_four_of_spades);
    p_card_five_of_spades = new Card();
    p_card_five_of_spades->SetCardSuit("Spades");
    p_card_five_of_spades->SetCardValue(5);
    AddCard(p_card_five_of_spades);
    p_card_six_of_spades = new Card();
    p_card_six_of_spades->SetCardSuit("Spades");
    p_card_six_of_spades->SetCardValue(6);
    AddCard(p_card_six_of_spades);
    p_card_seven_of_spades = new Card();
    p_card_seven_of_spades->SetCardSuit("Spades");
    p_card_seven_of_spades->SetCardValue(7);
    AddCard(p_card_seven_of_spades);
    p_card_eight_of_spades = new Card();
    p_card_eight_of_spades->SetCardSuit("Spades");
    p_card_eight_of_spades->SetCardValue(8);
    AddCard(p_card_eight_of_spades);
    p_card_nine_of_spades = new Card();
    p_card_nine_of_spades->SetCardSuit("Spades");
    p_card_nine_of_spades->SetCardValue(9);
    AddCard(p_card_nine_of_spades);
    p_card_ten_of_spades = new Card();
    p_card_ten_of_spades->SetCardSuit("Spades");
    p_card_ten_of_spades->SetCardValue(10);
    AddCard(p_card_ten_of_spades);
    p_card_jack_of_spades = new Card();
    p_card_jack_of_spades->SetCardSuit("Spades");
    p_card_jack_of_spades->SetCardValue(11);
    AddCard(p_card_jack_of_spades);
    p_card_queen_of_spades = new Card();
    p_card_queen_of_spades->SetCardSuit("Spades");
    p_card_queen_of_spades->SetCardValue(12);
    AddCard(p_card_queen_of_spades);
    p_card_king_of_spades = new Card();
    p_card_king_of_spades->SetCardSuit("Spades");
    p_card_king_of_spades->SetCardValue(13);
    AddCard(p_card_king_of_spades);
    p_card_ace_of_spades = new Card();
    p_card_ace_of_spades->SetCardSuit("Spades");
    p_card_ace_of_spades->SetCardValue(14);
    AddCard(p_card_ace_of_spades);

    //Clubs
    p_card_two_of_clubs = new Card();
    p_card_two_of_clubs->SetCardSuit("Clubs");
    p_card_two_of_clubs->SetCardValue(2);
    AddCard(p_card_two_of_clubs);
    p_card_three_of_clubs = new Card();
    p_card_three_of_clubs->SetCardSuit("Clubs");
    p_card_three_of_clubs->SetCardValue(3);
    AddCard(p_card_three_of_clubs);
    p_card_four_of_clubs = new Card();
    p_card_four_of_clubs->SetCardSuit("Clubs");
    p_card_four_of_clubs->SetCardValue(4);
    AddCard(p_card_four_of_clubs);
    p_card_five_of_clubs = new Card();
    p_card_five_of_clubs->SetCardSuit("Clubs");
    p_card_five_of_clubs->SetCardValue(5);
    AddCard(p_card_five_of_clubs);
    p_card_six_of_clubs = new Card();
    p_card_six_of_clubs->SetCardSuit("Clubs");
    p_card_six_of_clubs->SetCardValue(6);
    AddCard(p_card_six_of_clubs);
    p_card_seven_of_clubs = new Card();
    p_card_seven_of_clubs->SetCardSuit("Clubs");
    p_card_seven_of_clubs->SetCardValue(7);
    AddCard(p_card_seven_of_clubs);
    p_card_eight_of_clubs = new Card();
    p_card_eight_of_clubs->SetCardSuit("Clubs");
    p_card_eight_of_clubs->SetCardValue(8);
    AddCard(p_card_eight_of_clubs);
    p_card_nine_of_clubs = new Card();
    p_card_nine_of_clubs->SetCardSuit("Clubs");
    p_card_nine_of_clubs->SetCardValue(9);
    AddCard(p_card_nine_of_clubs);
    p_card_ten_of_clubs = new Card();
    p_card_ten_of_clubs->SetCardSuit("Clubs");
    p_card_ten_of_clubs->SetCardValue(10);
    AddCard(p_card_ten_of_clubs);
    p_card_jack_of_clubs = new Card();
    p_card_jack_of_clubs->SetCardSuit("Clubs");
    p_card_jack_of_clubs->SetCardValue(11);
    AddCard(p_card_jack_of_clubs);
    p_card_queen_of_clubs = new Card();
    p_card_queen_of_clubs->SetCardSuit("Clubs");
    p_card_queen_of_clubs->SetCardValue(12);
    AddCard(p_card_queen_of_clubs);
    p_card_king_of_clubs = new Card();
    p_card_king_of_clubs->SetCardSuit("Clubs");
    p_card_king_of_clubs->SetCardValue(13);
    AddCard(p_card_king_of_clubs);
    p_card_ace_of_clubs = new Card();
    p_card_ace_of_clubs->SetCardSuit("Clubs");
    p_card_ace_of_clubs->SetCardValue(14);
    AddCard(p_card_ace_of_clubs);

    //Diamonds
    p_card_two_of_diamonds = new Card();
    p_card_two_of_diamonds->SetCardSuit("Diamonds");
    p_card_two_of_diamonds->SetCardValue(2);
    AddCard(p_card_two_of_diamonds);
    p_card_three_of_diamonds = new Card();
    p_card_three_of_diamonds->SetCardSuit("Diamonds");
    p_card_three_of_diamonds->SetCardValue(3);
    AddCard(p_card_three_of_diamonds);
    p_card_four_of_diamonds = new Card();
    p_card_four_of_diamonds->SetCardSuit("Diamonds");
    p_card_four_of_diamonds->SetCardValue(4);
    AddCard(p_card_four_of_diamonds);
    p_card_five_of_diamonds = new Card();
    p_card_five_of_diamonds->SetCardSuit("Diamonds");
    p_card_five_of_diamonds->SetCardValue(5);
    AddCard(p_card_five_of_diamonds);
    p_card_six_of_diamonds = new Card();
    p_card_six_of_diamonds->SetCardSuit("Diamonds");
    p_card_six_of_diamonds->SetCardValue(6);
    AddCard(p_card_six_of_diamonds);
    p_card_seven_of_diamonds = new Card();
    p_card_seven_of_diamonds->SetCardSuit("Diamonds");
    p_card_seven_of_diamonds->SetCardValue(7);
    AddCard(p_card_seven_of_diamonds);
    p_card_eight_of_diamonds= new Card();
    p_card_eight_of_diamonds->SetCardSuit("Diamonds");
    p_card_eight_of_diamonds->SetCardValue(8);
    AddCard(p_card_eight_of_diamonds);
    p_card_nine_of_diamonds = new Card();
    p_card_nine_of_diamonds->SetCardSuit("Diamonds");
    p_card_nine_of_diamonds->SetCardValue(9);
    AddCard(p_card_nine_of_diamonds);
    p_card_ten_of_diamonds = new Card();
    p_card_ten_of_diamonds->SetCardSuit("Diamonds");
    p_card_ten_of_diamonds->SetCardValue(10);
    AddCard(p_card_ten_of_diamonds);
    p_card_jack_of_diamonds= new Card();
    p_card_jack_of_diamonds->SetCardSuit("Diamonds");
    p_card_jack_of_diamonds->SetCardValue(11);
    AddCard(p_card_jack_of_diamonds);
    p_card_queen_of_diamonds = new Card();
    p_card_queen_of_diamonds->SetCardSuit("Diamonds");
    p_card_queen_of_diamonds->SetCardValue(12);
    AddCard(p_card_queen_of_diamonds);
    p_card_king_of_diamonds = new Card();
    p_card_king_of_diamonds->SetCardSuit("Diamonds");
    p_card_king_of_diamonds->SetCardValue(13);
    AddCard(p_card_king_of_diamonds);
    p_card_ace_of_diamonds= new Card();
    p_card_ace_of_diamonds->SetCardSuit("Diamonds");
    p_card_ace_of_diamonds->SetCardValue(14);
    AddCard(p_card_ace_of_diamonds);
    }
}
/*    }
    }
}*/

CardDeck::~CardDeck()
{

}


void CardDeck::AddCard(Card* p_new_card)
{
  shoe.push_back(p_new_card);
}

Card* CardDeck::GetCardOnTop()
{
   if (!IsEmpty())
  {
    Card* p_first_card = shoe.front();
    shoe.erase(shoe.begin());
    return p_first_card;
  }
  return nullptr;
}

bool CardDeck::IsEmpty()
{
  bool is_empty = false;

  if (shoe.size() < 1)
  {
    is_empty = true;
  }
  return is_empty;
}

int CardDeck::GetNrOfCardsInDeck()
{
 return shoe.size();
}

void CardDeck::Shuffle()
{
  std::vector<Card*> shuffled_deck;
  std::vector<Card*> temp_deck;
  temp_deck = shoe;
  int card_pos = -1;

  for(unsigned int i = 0; i < shoe.size(); ++i)
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
  shoe = shuffled_deck;
}

