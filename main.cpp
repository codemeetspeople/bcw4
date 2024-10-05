#include <iostream>
#include "Location.hpp"

int main() {
    Location a;
    Location b(2, 2);

    std::cout << a << std::endl;
    std::cout << a.distance(b) << std::endl;
    
    return 0;
}
