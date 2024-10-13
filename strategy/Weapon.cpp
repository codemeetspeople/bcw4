#include "Weapon.hpp"

Weapon::Weapon(const std::string& title, int capacity, int damage) {
    this->title = title;
    this->capacity = capacity;
    this->amount = capacity;
    this->damage = damage;
}

Weapon::~Weapon() {}

const std::string& Weapon::getTitle() const {
    return this->title;
}

int Weapon::getCapacity() const {
    return this->capacity;
}

int Weapon::getAmount() const {
    return this->amount;
}

void Weapon::reload() {
    this->amount = this->capacity;
}