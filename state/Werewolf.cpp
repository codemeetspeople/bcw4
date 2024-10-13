#include "Werewolf.hpp"

Werewolf::Werewolf(const std::string& title, int maxHP, int dmg)
        : Soldier(title, maxHP, dmg)
{
    this->altState = new State("Werewolf (wolf)", 150, 25);
}

Werewolf::~Werewolf() {
    delete(this->altState);
}

void Werewolf::transform() {
    State* tmp = this->state;

    this->state = this->altState;
    this->altState = tmp;
}
