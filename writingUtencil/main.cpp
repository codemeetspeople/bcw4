#include <iostream>
#include "Pen.hpp"
#include "Paper.hpp"
#include "OutOfInkException.hpp"
#include "OutOfSpaceException.hpp"

int main() {
    Paper paper;
    Pen pen;

    std::cout << pen << std::endl; // Pen(4096/4096)
    std::cout << paper << std::endl; // Paper(0/1024)

    try {
        pen.write(paper, "Hello!");
    } catch ( OutOfInkException obj ) {
        std::cout << "Not enough ink..." << std::endl;
    } catch ( OutOfSpaceException obj ) {
        std::cout << "Not enough space..." << std::endl;
    }

    paper.show() // Hello!

    std::cout << pen << std::endl; // Pen(4090/4096)
    std::cout << paper << std::endl; // Paper(6/1024)

    return 0;
}
