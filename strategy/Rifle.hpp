#ifndef RIFLE_HPP
#define RIFLE_HPP

#include "Weapon.hpp"

class Rifle : public Weapon {
    public:
        Rifle(const std::string& title, int capacity, int damage);
        virtual ~Rifle();
        virtual void fire(Soldier& target);
};

#endif