#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "Location.hpp"

class Car {
    private:
        std::string model;
        double tankCapacity;
        double fuelAmount;
        double mileage;
        double fuelConsumption;
        Location location;

    public:
        Car(const std::string& model, double tankCapacity);

        const std::string& getModel() const;
        double getTankCapacity() const;
        double getFuelAmount() const;
        double getMileage() const;
        double getFuelConsumption() const;
        const Location& getLocation() const;

        void refuel(double fuel);
        void refuelUntilFull();
        void move(const Location& newLocation);
};

std::ostream& operator<<(std::ostream& out, const Car& car);

#endif
