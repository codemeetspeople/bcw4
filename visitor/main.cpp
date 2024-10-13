#include <iostream>

class Printer {
    public:
        std::string address;
};

class Scaner {
    public:
        std::string address;
};

class Router {
    public:
        std::string address;
};


class Visitor {
    public:
        void setUp(Printer& obj) {
            obj.address = "127.0.0.1";
        }

        void setUp(Scaner& obj) {
            obj.address = "127.0.0.2";
        }

        void setUp(Router& obj) {
            obj.address = "127.0.0.3";
        }
};



int main() {
    Printer printer;
    Scaner scaner;
    Router router;
    Visitor visitor;

    visitor.setUp(printer);
    visitor.setUp(scaner);
    visitor.setUp(router);

    std::cout << "Printer address = " << printer.address << std::endl;
    std::cout << "Scaner address = " << scaner.address << std::endl;
    std::cout << "Router address = " << router.address << std::endl;

    return 0;
}