#include "Die.h"
void Die::rolled() {
    srand(time(0));
    DieValue = rand()% sides +1;
    cout << "Die: " << DieValue << endl;
}
Die::Die() {
    sides=6;
}
Die::Die(int sides) {
    this->sides=sides;
}
int Die::number() {
    rolled();
    return DieValue;
}
