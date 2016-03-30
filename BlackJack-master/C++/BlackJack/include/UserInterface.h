#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <vector>
#include <string>
#include <iostream>
#include "Game.h"
#include "Player.h"

class UserInterface
{
    public:
        UserInterface();
        virtual ~UserInterface();
        void StartUserInterface();
    protected:
    private:
        void StartMenuEvent(std::vector<char> event);
        void CreateDeck(std::vector<char> event);
        Player* p_newplayers;
        Game* p_newgame;
};

#endif // USERINTERFACE_H
