#include <iostream>
#include "Field.hpp"
#include "InvalidParameter.hpp"

int main() {
    Integer a(10);
    PositiveInteger b(20);

    try {
        PositiveInteger c(-10);
    } catch ( InvalidParameter obj ) {
        std::cout << "Value should be positive!" << std::endl;
    }

    std::cout << a.getValue() << std::endl;
    std::cout << b.getValue() << std::endl;

    return 0;
}