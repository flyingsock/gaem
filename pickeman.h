#ifndef PICKEMAN_H
#define PICKEMAN_H
#include "unit.h"


class Pickeman : public Unit
{
public:
    Pickeman();
    const int PAYMENT = 10;
    const int PRICE = 800;
private:
    const int DEFAULT_HIT_POINTS = 2;
    const int DEFAULT_DEFENCE_POINTS = 2;
    const int DEFAULT_LIFE_DURATION = 12;
};

#endif // PICKEMAN_H
