#include <iostream>
#include "Unit.hpp"
#include "Snapshot.hpp"

int main() {
    Unit* first = new Unit("First", 100, 10);
    Unit* second = new Unit("Second", 100, 10);

    Snapshot* s = first->createSnapshot();
    std::cout << *first << std::endl;

    first->attack(second);
    second->attack(first);
    first->attack(second);

    std::cout << *first << std::endl;
    first->restore(s);

    std::cout << *first << std::endl;

    delete(first);
    delete(second);
    delete(s);

    return 0;
}
