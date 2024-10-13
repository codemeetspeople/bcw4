#include "State.hpp"
#include "HPException.hpp"

State::State(const std::string& title, int maxHP, int dmg)
     : title(title), hp(maxHP), maxHP(maxHP), dmg(dmg) {}

State::~State() {}

const std::string& State::getTitle() const {
    return this->title;
}

int State::getHP() const {
    return this->hp;
}

int State::getMaxHP() const {
    return this->maxHP;
}

int State::getDmg() const {
    return this->dmg;
}

void State::takeDamage(int dmg) {
    if ( this->getHP() == 0 ) {
        throw HPException();
    }
    if ( dmg > this->getHP() ) {
        this->hp = 0;
        return;
    }
    this->hp -= dmg;
}
