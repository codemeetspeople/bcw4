#include "Soldier.hpp"

Soldier::Soldier(const std::string& title, int maxHP, int dmg)
       : Unit(title, maxHP, dmg) {}

Soldier::~Soldier() {}

void Soldier::attack(Unit* enemy) {
    enemy->takeDamage(this->getDmg());
    enemy->counterAttack(this);
}

void Soldier::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDmg()/2);
}
