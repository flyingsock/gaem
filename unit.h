#ifndef UNIT_H
#define UNIT_H


class Unit {
public:
    virtual ~Unit();
protected:
    unsigned short life_duration;
    unsigned short defence_points;
    unsigned short hit_points;
};

#endif // UNIT_H
