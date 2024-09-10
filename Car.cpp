#include <iostream>
#include <cmath>

class NotEnoughTankCapacityException {};
class NotEnoughFuelException {};


class Location {
    private:
        int x;
        int y;

    public:
        Location(int x = 0, int y = 0) {
            // your code here :)
        }

        int getX() const {
            // your code here :)
        }

        int getY() const {
            // your code here :)
        }

        double distance(const Location& location) const {
            // your code here :)
        }

        friend std::ostream& operator<<(std::ostream& out, const Location& location);
};

class Car {
    private:
        std::string model;
        double tankCapacity;
        double fuelAmount;
        double mileage;
        double fuelConsumption;
        Location location;

    public:
        Car(const std::string& model, double tankCapacity, double fuelConsumption) {
            this->model = model;
            this->tankCapacity = tankCapacity;
            this->fuelAmount = 0.0;
            this->mileage = 0.0;
            this->fuelConsumption = fuelConsumption;
            this->location = Location();
        }

        const std::string& getModel() const {
            // your code here :)
        }

        double getTankCapacity() const {
            // your code here :)
        }

        double getFuelAmount() const {
            // your code here :)
        }

        double getMileage() const {
            // your code here :)
        }

        const Location& getLocation() const {
            // your code here :)
        }

        void refuel(double fuel) {
            // your code here :)
        }

        void refuelUntilFull() {
            // your code here :)
        }

        void move(const Location& newLocation) {
            // your code here :)
        }

        friend std::ostream& operator<<(std::ostream& out, const Car& car);
};

std::ostream& operator<<(std::ostream& out, const Location& location) {
    // your code here :)
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.model << ": " << std::endl;
    out << "  - fuel: " << car.fuelAmount << "/" << car.tankCapacity << std::endl;
    out << "  - mileage: " << car.mileage << std::endl;
    out << "  - location: " << car.location << std::endl;
    return out;
}

int main() {
    Car toyota("Toyota", 60.0, 1.3);

    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 0/60
//   - mileage: 0
//   - location: (0, 0)

    toyota.refuel(30.0);
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 30/60
//   - mileage: 0
//   - location: (0, 0)

    toyota.move(Location(10, 4));
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 15.9986/60
//   - mileage: 10.7703
//   - location: (10, 4)

    toyota.move(Location());
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 1.99714/60
//   - mileage: 21.5407
//   - location: (0, 0)

    try {
        toyota.move(Location(10, 8));
    } catch ( NotEnoughFuelException exc ) {
        std::cout << "Not enough fuel..." << std::endl;
    }

    try {
        toyota.refuel(100.0);
    } catch ( NotEnoughTankCapacityException exc ) {
        std::cout << "Not enough tank capacity..." << std::endl;
    }
    
    toyota.refuelUntilFull();
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 60/60
//   - mileage: 21.5407
//   - location: (0, 0)

    return 0;
}
