#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include <iostream>
#include "Unit.hpp"


class Soldier : public Unit {
    public:
        Soldier(const std::string& title="Soldier", int maxHP=120, int dmg=20);
        virtual ~Soldier();

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};



#endif
