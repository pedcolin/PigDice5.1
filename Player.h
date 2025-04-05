
#include<iostream>
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
private:
    int total_score;
    public:
    void addtotal_score(int score);
    Player();
    int get_total_score();
};



#endif //PLAYER_H
