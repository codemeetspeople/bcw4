#include "Unit.hpp"

Unit::Unit(const std::string& title, int maxHP, int dmg)
    : title(title), hp(maxHP), maxHP(maxHP), dmg(dmg) {}

Unit::~Unit() {}

const std::string& Unit::getTitle() const {
    return this->title;
}

int Unit::getHP() const {
    return this->hp;
}

int Unit::getMaxHP() const {
    return this->maxHP;
}

int Unit::getDmg() const {
    return this->dmg;
}

void Unit::takeDamage(int dmg) {
    if ( this->getHP() == 0 ) {
        return;
    }
    if ( dmg > this->getHP() ) {
        this->hp = 0;
        return;
    }
    this->hp -= dmg;
}

void Unit::attack(Unit* enemy) {
    enemy->takeDamage(this->getDmg());
    enemy->counterAttack(this);
}

void Unit::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDmg()/2);
}

Snapshot* Unit::createSnapshot() const {
    return new Snapshot(this->title, this->hp, this->maxHP, this->dmg);
}

void Unit::restore(Snapshot* snapshot) {
    this->title = snapshot->title;
    this->hp = snapshot->hp;
    this->maxHP = snapshot->maxHP;
    this->dmg = snapshot->dmg;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getTitle() << ":" << std::endl;
    out << " - hp(" << unit.getHP() << "/" << unit.getMaxHP() << ")";
    out << std::endl;
    out << " - dmg(" << unit.getDmg() << ")" << std::endl;

    return out;
}