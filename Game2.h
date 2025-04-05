//
// Created by administrator on 3/20/25.
//

#ifndef GAME2_H
#define GAME2_H
#include "Game.h"
#include "Player.h"


class Game2 : public Game {
    private:
    bool player1_turn = true;
    Player player2;
    int player1_turn_number = 1;
    int player2_turn_number = 1;
    string player1_name, player2_name;
    public:
Game2();
    void rules();
void setPlayerNames();
};



#endif //GAME2_H
