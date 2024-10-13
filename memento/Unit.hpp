#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include "Snapshot.hpp"

class Unit {
    protected:
        std::string title;
        int hp;
        int maxHP;
        int dmg;

    public:
        Unit(const std::string& title, int maxHP, int dmg);
        virtual ~Unit();

        virtual const std::string& getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;

        virtual void takeDamage(int dmg);

        virtual Snapshot* createSnapshot() const;
        virtual void restore(Snapshot* snapshot);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif
