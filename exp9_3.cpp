#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }
    virtual double calculateBonus() {
        return 0;
    }
};

class Manager : public Employee {
public:
    Manager(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.20;   // 20% bonus
    }
};
class Developer : public Employee {
public:
    Developer(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.10;   
    }
};
int main() {

    Manager manager(50000);
    Developer developer(50000);
    
    Employee* emp;
    emp = &manager;
    cout << "Manager Bonus: " << emp->calculateBonus() << endl;
    emp = &developer;
    cout << "Developer Bonus: " << emp->calculateBonus() << endl;

    return 0;
}