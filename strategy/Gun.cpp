#include "Gun.hpp"

Gun::Gun(const std::string& title, int capacity, int damage)
    : Weapon(title, capacity, damage) {}

Gun::~Gun() {}

void Gun::fire(Soldier& target) {
    if ( this->amount == 0 ) {
        std::cout << "Click..." << std::endl;
        return;
    }
    std::cout << "Bang!!!" << std::endl;
    this->amount -= 1;
    target.takeDamage(this->damage);
}
