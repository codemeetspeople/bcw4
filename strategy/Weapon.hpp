#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "Soldier.hpp"

class Soldier;

class Weapon {
    protected:
        std::string title;
        int capacity;
        int amount;
        int damage;

    public:
        Weapon(const std::string& title, int capacity, int damage);
        virtual ~Weapon();

        virtual const std::string& getTitle() const;
        virtual int getCapacity() const;
        virtual int getAmount() const;

        virtual void fire(Soldier& target) = 0;
        virtual void reload();
};

#endif