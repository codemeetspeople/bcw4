#include "Rifle.hpp"

Rifle::Rifle(const std::string& title, int capacity, int damage)
    : Weapon(title, capacity, damage) {}

Rifle::~Rifle() {}

void Rifle::fire(Soldier& target) {
    for ( int i = 0; i < 3; i++ ) {
        if ( this->amount == 0 ) {
            std::cout << "Click..." << std::endl;
            return;
        }
        std::cout << "Bang!!!" << std::endl;
        this->amount -= 1;
        target.takeDamage(this->damage);
    }
}
