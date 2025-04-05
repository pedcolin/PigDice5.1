#ifndef TURN_H
#define TURN_H
#include "Die.h"
#include "Game.h"
#include <iostream>
using namespace std;



class Turn {
    Die die1;
    int total_score=0;
    int turn_score=0;
    int turn_number=1;
    bool turn_over=false;
    void addedturn();
    void Roll(int s);
    void Hold(int &score);
    int Get_Turnscore();
public:
    Turn();
    void roll_Hold(int &score);
    int Get_total_score();
    void set_player1_turn();

};



#endif //TURN_H