#include "Rogue.hpp"

Rogue::Rogue(const std::string& title, int maxHP, int dmg)
       : Unit(title, maxHP, dmg) {}

Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    enemy->takeDamage(this->getDmg());
}

void Rogue::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDmg()/2);
}
