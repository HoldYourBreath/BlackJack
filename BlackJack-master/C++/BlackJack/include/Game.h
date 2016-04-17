#ifndef GAME_H
#define GAME_H
#include <string>
#include <vector>
#include "Card.h"
#include "CardDeck.h"
#include "Player.h"

class Game
{
  public:
        Game();
        virtual ~Game();
        void Shuffle();
        void Run();
        Game(Player* p_p1, Player* p_p2);
        void StartGameUI();
    protected:
    private:
        CardDeck* p_card_deck;
        std::string player_name;
        void GameLoop();
        std::vector<Player*> players;
        Player* p_dealer;
        Player* p_player1;
        void UiEvent(std::vector<char> event);
        void Clear();
        bool surrender = false;
        Card* topcard;
};

#endif // GAME_H
