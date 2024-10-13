#include "Unit.hpp"

Unit::Unit(const std::string& title, int maxHP, int dmg) {
    this->state = new State(title, maxHP, dmg);
}
Unit::~Unit() {
    delete(this->state);
}

const std::string& Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHP() const {
    return this->state->getHP();
}

int Unit::getMaxHP() const {
    return this->state->getMaxHP();
}

int Unit::getDmg() const {
    return this->state->getDmg();
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getTitle() << ":" << std::endl;
    out << " - hp(" << unit.getHP() << "/" << unit.getMaxHP() << ")";
    out << std::endl;
    out << " - dmg(" << unit.getDmg() << ")" << std::endl;

    return out;
}