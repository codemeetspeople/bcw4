#ifndef GUN_HPP
#define GUN_HPP

#include "Weapon.hpp"

class Gun : public Weapon {
    public:
        Gun(const std::string& title, int capacity, int damage);
        virtual ~Gun();
        virtual void fire(Soldier& target);
};

#endif