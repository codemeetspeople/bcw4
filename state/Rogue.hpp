#ifndef ROGUE_HPP
#define ROGUE_HPP

#include <iostream>
#include "Unit.hpp"


class Rogue : public Unit {
    public:
        Rogue(const std::string& title="Rogue", int maxHP=90, int dmg=30);
        virtual ~Rogue();

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};



#endif
