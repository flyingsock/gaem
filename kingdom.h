#ifndef KINGDOM_H
#define KINGDOM_H
#include<vector>
#include"unit.h"


class Kingdom {
public:
    Kingdom();
private:
    int count_of_money;
    std::vector<Unit>* units;
};

#endif // KINGDOM_H
