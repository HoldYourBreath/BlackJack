#ifndef UIPLAYGAME_H
#define UIPLAYGAME_H
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"


class UIPlayGame
{
    public:
        UIPlayGame();
        virtual ~UIPlayGame();
        std::vector<char> DrawBoard(Player* p1, Player* p2, int active_player);
    protected:
    private:

};

#endif // UIPLAYGAME_H
