#ifndef OUT_OF_FUEL_EXCEPTION_HPP
#define OUT_OF_FUEL_EXCEPTION_HPP

#include <iostream>

class OutOfFuelException {
    private:
        std::string message;

    public:
        OutOfFuelException(const std::string& message);
        const std::string& getMessage() const;
};

#endif
