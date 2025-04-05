//
// Created by administrator on 3/20/25.
//
#include <iostream>
using namespace std;
#include "Game2.h"

void Game2::rules() {
    cout << "Let's Play PIG Dice! " << endl << endl;
    cout << "* See which player will reach 50 points in the fewest turns."<< endl;
    cout << "* Turn ends when you hold or roll a 1." << endl;
    cout << "* If you roll a 1, you lose all points for the turn." << endl;
    cout << "* If you hold, you save all points for the turn." << endl;
}
void Game2::setPlayerNames() {
  string player1;
  string player2;
    cout << endl << "Enter player1's name: ";
    getline(cin,player1);
    player1_name=player1;
    cout << "Enter player2's name: ";
    getline(cin, player2);
    player2_name=player2;
}

Game2::Game2() {
    int temp1=0;
    int temp2=0;

    rules();
    setPlayerNames();
    while (game_over == false) {
        Turn turn;
        if (player1_turn==true) {
cout << endl << player1_name << " (Score: " << temp1 << ") - TURN" << player1_turn_number << endl;
            turn.roll_Hold(temp1);
            player1_turn_number++;

        } else if (player1_turn==false) {
            cout << endl << player2_name << " (Score: " << temp2 << ") - TURN" << player2_turn_number << endl;
            turn.roll_Hold(temp2);
            player2_turn_number++;
            if (temp1 >= 50 && player1_turn_number == player2_turn_number) {
                game_over = true;
                cout << "Congratulations " << player1_name << " you're the winner!" << endl;
                player1_turn_number--;
                cout << "You had a final score of " << temp1 << " points after " << player1_turn_number<< " turns!" << endl;
                cout << endl << "THANKS FOR PLAYING!";
            }
            if (temp2 >= 50 && player2_turn_number == player1_turn_number) {
                game_over = true;
                cout << "Congratulations " << player2_name << " you're the winner!" << endl;
                player2_turn_number--;
                cout << "You had a final score of " << temp2 << " points after " << player2_turn_number << " turns!" << endl;
                cout << endl << "THANKS FOR PLAYING!";
            }
        }

        player1_turn=! player1_turn;
    }



    }

