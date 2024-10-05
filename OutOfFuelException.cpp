#include "OutOfFuelException.hpp"

OutOfFuelException::OutOfFuelException(const std::string& message) {
    this->message = message;
}

const std::string& OutOfFuelException::getMessage() const {
    return this->message;
};