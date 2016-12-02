#ifndef PLAGUE_H
#define PLAGUE_H
#include <vector>
#include "danger.h"


class Plague : public Danger {
    public:
        Plague();
        void to_damage();
    };

#endif // PLAGUE_H
