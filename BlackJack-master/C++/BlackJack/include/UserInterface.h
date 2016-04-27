#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <vector>
#include <string>
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Card.h"

class UserInterface
{
    public:
        UserInterface();
        virtual ~UserInterface();
        void StartUserInterface();
        void UserInterfaceLoop();
    protected:
    private:
        void StartMenuEvent(std::vector<char> event);
        //Player* p_newplayers;
        Game* p_newgame;
        Card* topcard;
        bool gameover = false;
        void Clear();

};

#endif // USERINTERFACE_H
