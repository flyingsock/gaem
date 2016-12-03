#ifndef KNIGHT_H
#define KNIGHT_H
#include "unit.h"


class Knight : public Unit {
public:
    const int PAYMENT = 15;
    const int PRICE = 1000;
    Knight();
private:
    const int DEFAULT_HIT_POINTS = 3;
    const int DEFAULT_DEFENCE_POINTS = 5;
    const int DEFAULT_LIFE_DURATION = 14;
    const int DEFAULT_PAYMENT = 15;
};

#endif // KNIGHT_H
