#ifndef PEASANT_H
#define PEASANT_H


class Peasant : public Unit
{
public:
    Peasant();
    const int DAILY_PROFIT = 100;
    const int PRICE = 500;
private:
    const int DEFAULT_HIT_POINTS = 1;
    const int DEFAULT_DEFENCE_POINTS = 1;
    const int DEFAULT_LIFE_DURATION = 10;
};

#endif // PEASANT_H
