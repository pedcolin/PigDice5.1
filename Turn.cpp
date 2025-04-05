#include "Turn.h"
void Turn::addedturn() {
    turn_number++;
}
void Turn::Roll(int s) {
    if (s == 1) {
        turn_score=0;
        cout << "Turn over. No Score." << endl << endl;
        addedturn();
        turn_over =true;
    }
    else {
        turn_score+=s;
    }
}
int Turn::Get_Turnscore() {
    return turn_score;
}
void Turn::Hold(int &score) {
    turn_over=true;
    score+=Get_Turnscore();
    cout << "Turn score: " << Get_Turnscore() << endl;
    cout << "Total score: " << score << endl;
    turn_score=0;
}
Turn::Turn() {
    turn_score=0;
    total_score=0;
    turn_number=1;
    turn_over=false;
}
void Turn::roll_Hold(int &score) {
    turn_over=false;
    char choice='z';
    while (turn_over==false) {
        cout << "roll or hold? (r/h): ";
        cin >> choice;
        if (choice == 'r'){
            Roll(die1.number());
        } else if (choice == 'h') {
            Hold(score);
            addedturn();
        }
    }
}
int Turn::Get_total_score() {
    return total_score;
}