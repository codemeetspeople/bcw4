#ifndef FIELD_HPP
#define FIELD_HPP

#include <iostream>

class Integer {
    private:
        int value;

    public:
        Integer(int value);

        int getValue() const;

};

class PositiveInteger {
    private:
        int value;

    public:
        PositiveInteger(int value);

        int getValue() const;
};

#endif
