#include <iostream> 
using namespace std;
class Vehicle {
public:
 
    virtual void start() const = 0;
    virtual void stop() const = 0;
};

class Car : public Vehicle {
 public:
  
    void start() const override {
        std::cout << "Car: Key inserted, engine started." << std::endl;
    }
    void stop() const override {
        std::cout << "Car: Brakes applied, engine stopped." << std::endl;
    }
};

class Bike : public Vehicle {
 public:
    
    void start() const override {
        std::cout << "Bike: Kick started, engine revving." << std::endl;
    }
    void stop() const override {
        std::cout << "Bike: Hand brake pulled, engine stopped." << std::endl;
    }
};

int main() {
    
    Car myCar;
    Bike myBike;
  
    Vehicle* v1 = &myCar;
    Vehicle* v2 = &myBike;
   
    std::cout << "=== Vehicle 1 (Car) ===" << std::endl;
    v1->start();
    v1->stop();

    std::cout << "\n=== Vehicle 2 (Bike) ===" << std::endl;
    v2->start();
    v2->stop();

    return 0; 
}