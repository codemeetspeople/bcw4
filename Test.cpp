#include <iostream>

class Test {
    private:
        int value;

    public:
        Test() {
            std::cout << __PRETTY_FUNCTION__ << std::endl;
            this->value = 0;
        }
        Test(int value) {
            std::cout << __PRETTY_FUNCTION__ << std::endl;
            this->value = value;
        }
        ~Test() {
            std::cout << __PRETTY_FUNCTION__ << std::endl;
        }

        int getValue() const {
            return this->value;
        }
};

std::ostream& operator<<(std::ostream& out, const Test& test) {
    out << "T(" << test.getValue() << ")";
    return out;
}


int main() {
    Test* a = new Test();

    std::cout << a << std::endl;
    std::cout << *a << std::endl;

    delete(a);

    return 0;
}
