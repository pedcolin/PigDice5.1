#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>


class Die {
    int DieValue;
    int sides;
    void rolled();
public:
    Die();
    Die(int sides);
    int number();
};



#endif //DIE_H
