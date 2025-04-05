#ifndef GAME_H
#define GAME_H
#include <iostream>

#include "Player.h"
using namespace std;
#include "Turn.h"



class Game {
protected:
    Player player1;
    bool game_over=false;
public:
    Game();
    void rules();
    void play();
    ;};



#endif //GAME_H
