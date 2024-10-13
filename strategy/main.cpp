#include <iostream>
#include "Soldier.hpp"
#include "Rifle.hpp"

int main() {
    Soldier jack("Jack", 120);
    Soldier john("John", 110);

    std::cout << jack << std::endl;
    std::cout << john << std::endl;

    jack.attack(john);
    std::cout << jack << std::endl;
    std::cout << john << std::endl;

    jack.changeWeapon(new Rifle("AUG", 30, 20));
    std::cout << jack << std::endl;

    jack.attack(john);
    std::cout << jack << std::endl;
    std::cout << john << std::endl;


    return 0;
}
