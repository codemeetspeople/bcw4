#include "Soldier.hpp"
#include "Gun.hpp"

Soldier::Soldier(const std::string& name, int hp) {
    this->name = name;
    this->hp = hp;
    this->weapon = new Gun("Beretta", 9, 15);
}

Soldier::~Soldier() {
    delete(this->weapon);
}

const std::string& Soldier::getName() const {
    return this->name;
}

int Soldier::getHP() const {
    return this->hp;
}

const Weapon* Soldier::getWeapon() const {
    return this->weapon;
}

void Soldier::takeDamage(int dmg) {
    if ( this->hp == 0 ) {
        return;
    }
    if ( dmg > this->hp ) {
        this->hp = 0;
        return;
    }
    this->hp -= dmg;
}

void Soldier::attack(Soldier& enemy) {
    if ( this->hp == 0 ) {
        std::cout << this->name << " is dead..." << std::endl;
        return;
    }
    this->weapon->fire(enemy);
}

void Soldier::changeWeapon(Weapon* newWeapon) {
    delete(this->weapon);

    this->weapon = newWeapon;
}

std::ostream& operator<<(std::ostream& out, const Soldier& soldier) {
    out << soldier.getName() << "[" << soldier.getHP() << "]" << std::endl;
    out << " - " << soldier.getWeapon()->getTitle();
    out << "(" << soldier.getWeapon()->getAmount();
    out << "/" << soldier.getWeapon()->getCapacity() << ")" << std::endl;

    return out;
}
