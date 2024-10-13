#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon;

class Soldier {
    private:
        std::string name;
        int hp;
        Weapon* weapon;

    public:
        Soldier(const std::string& name, int hp);
        virtual ~Soldier();

        const std::string& getName() const;
        int getHP() const;
        const Weapon* getWeapon() const;

        void takeDamage(int dmg);

        void attack(Soldier& enemy);
        void changeWeapon(Weapon* newWeapon);
};

std::ostream& operator<<(std::ostream& out, const Soldier& soldier);

#endif
