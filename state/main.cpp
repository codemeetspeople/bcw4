#include <iostream>
#include "Soldier.hpp"
#include "Rogue.hpp"
#include "Werewolf.hpp"

int main() {
    Soldier* soldier = new Soldier();
    Rogue* rogue = new Rogue();
    Werewolf* werewolf = new Werewolf();

    std::cout << *werewolf << std::endl;
    werewolf->transform();
    std::cout << *werewolf << std::endl;

    rogue->attack(werewolf);
    rogue->attack(werewolf);
    std::cout << *werewolf << std::endl;
    werewolf->transform();
    std::cout << *werewolf << std::endl;
    werewolf->transform();
    std::cout << *werewolf << std::endl;

    delete(soldier);
    delete(rogue);
    delete(werewolf);

    return 0;
}
