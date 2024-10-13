#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include "State.hpp"


class Unit {
    protected:
        State* state;

    public:
        Unit(const std::string& title, int maxHP, int dmg);
        virtual ~Unit();

        virtual const std::string& getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;

        virtual void takeDamage(int dmg);

        virtual void attack(Unit* enemy) = 0;
        virtual void counterAttack(Unit* enemy) = 0;
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif
