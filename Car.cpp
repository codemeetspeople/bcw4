#include "Car.hpp"
#include "OutOfFuelException.hpp"

Car::Car(const std::string& model, double tankCapacity) {
    this->model = model;
    this->tankCapacity = tankCapacity;
    this->fuelAmount = tankCapacity;
    this->mileage = 0.0;
    this->fuelConsumption = 1.3;
    this->location = Location();
}

const std::string& Car::getModel() const {
    return this->model;
}

double Car::getTankCapacity() const {
    return this->tankCapacity;
}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getMileage() const {
    return this->mileage;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Location& Car::getLocation() const {
    return this->location;
}

void Car::refuel(double fuel) {
    if ( this->getFuelAmount() + fuel > this->getTankCapacity() ) {
        return;
    }
    this->fuelAmount += fuel;
}

void Car::refuelUntilFull() {
    this->fuelAmount = this->tankCapacity;
}

void Car::move(const Location& newLocation) {
    double distance = this->location.distance(newLocation);
    double fuelNeeded = distance * this->fuelConsumption;

    if ( fuelNeeded > this->getFuelAmount() ) {
        throw OutOfFuelException("Not enough fuel...");
    }

    this->fuelAmount -= fuelNeeded;
    this->mileage += distance;
    this->location = newLocation;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getModel() << ":" << std::endl;
    out << " - fuel: " << car.getFuelAmount() << "/" << car.getTankCapacity()
        << std::endl;
    out << " - mileage: " << car.getMileage() << std::endl;
    out << " - location: " << car.getLocation() << std::endl;

    return out;
}
