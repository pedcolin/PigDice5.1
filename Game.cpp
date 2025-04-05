
#include "Game.h"
#include "Player.h"

void Game::rules() {
    cout << "Let's Play PIG Dice!"<< endl << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "* Turn ends when you hold or roll a 1"<< endl;
    cout << "* If you roll a 1, you lose all points for the turn"<< endl;
    cout << "* If you hold, you save all the points for the turn"<< endl << endl;
    cout << "Turn 1" << endl;
}
Game::Game() {
}
void Game::play(){
    game_over = false;
    int temp=0;
    rules();
    while (game_over == false) {
        Turn turn;
        turn.roll_Hold(temp);
        if (turn.Get_total_score()>=20) {
            game_over=true;
        }
    }
}

