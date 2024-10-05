#include "Field.hpp"
#include "InvalidParameter.hpp"

Integer::Integer(int value) {
    this->value = value;
}

PositiveInteger::PositiveInteger(int value) {
    if ( value < 0 ) {
        throw InvalidParameter();
    }
    this->value = value;
}

int Integer::getValue() const { return this->value; }
int PositiveInteger::getValue() const { return this->value; }
