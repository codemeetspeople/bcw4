#include <iostream>
#include "Car.hpp"
#include "Location.hpp"
#include "OutOfFuelException.hpp"

int main() {
    Car toyota = Car("Toyota Camry", 60.0);

    std::cout << toyota << std::endl;

    try {
        toyota.move(Location(10, 8));
    } catch ( OutOfFuelException obj ) {
        std::cout << obj.getMessage() << std::endl;
    }

    std::cout << toyota << std::endl;

    return 0;
}
