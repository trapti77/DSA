#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
Abstract class -->
1. Act as an interface for the outside world to operate the car.
2. This abstract class tells 'WHAT' all it can do rather then 'HOW' it does that.
3. Since this is an abstract class we cannot directly create Objects of this class.
4. We need to Inherit it first and then that child class will have the responsibility to
provide implementation details of all the abstract (virtual) methods in the class.

5. In our real world example of Car, imagine you sitting in the car and able to operate
the car (startEngine, accelerate, brake, turn) just by pressing or moving some
pedals/buttons/ steer the wheel etc. You dont need to know how these things work, and
also they are hidden under the hood.
6. This Class 'Car' denotes that (pedals/buttons/steering wheel etc).
*/
class Car
{
public:
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate(int speed) = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car() {}; // destructor
};
/*
1. This is a Concrete class (A class that provide implementation details of an abstract class).
Now anyone can make an Object of 'SportsCar' and can assign it to 'Car' (Parent class) pointer
(See main method for this)

2. In our real world example of Car, as you cannot have a real car by just having its body only
(all these buttons or steering wheel). You need to have the actual implementation of 'What' happens
when we press these buttons. 'SportsCar' class denotes that actual implementation.

3. Therefore, to denote a real world car in programming we created 2 classes.
One to denote all the user-interface like pedals, buttons, steering wheels etc ('Car' class).And,
Another one to denote the actual car with all the implementations of these buttons (SportsCar' class).

*/
class SportsCar : public Car
{
public:
    string brand;
    string model;
    bool isEngineon;
    int currentSpeed;
    int currentGear;
    SportsCar(string b, string m)
    {
        this->brand = b;
        this->model = m;
        this->isEngineon = false;
        this->currentSpeed = 0;
        this->currentGear = 0;
    }
    void startEngine()
    {
        isEngineon = true;
        cout << brand << " " << model << "Engine started" << endl;
    }
    void shiftGear(int gear)
    {
        if (!isEngineon)
        {
            cout << brand << " " << model << " : Engine is off !cannot shift Gear" << endl;
            return;
        }
        currentGear = gear;
        cout << brand << " " << model << " : shifted to Gear " << currentGear << endl;
    }
    void accelerate(int speed)
    {
        if (!isEngineon)
        {
            cout << brand << " " << model << " : Engine is off !cannot accelerate" << endl;
            return;
        }
        currentSpeed += speed;
        cout << brand << " " << model << " : Accelerated to " << currentSpeed << " km/h" << endl;
    }
    void brake()
    {
        if (!isEngineon)
        {
            cout << brand << " " << model << " : Engine is off !cannot brake" << endl;
            return;
        }
        currentSpeed = 0;
        cout << brand << " " << model << " : Braked to " << currentSpeed << " km/h" << endl;
    }
    void stopEngine()
    {
        if (!isEngineon)
        {
            cout << brand << " " << model << " : Engine is already off" << endl;
            return;
        }
        isEngineon = false;
        currentSpeed = 0;
        currentGear = 0;
        cout << brand << " " << model << " : Engine stopped" << endl;
    }
};
int main()
{

    Car *myCar = new SportsCar("Ford", "Mustang");

    myCar->startEngine();
    myCar->shiftGear(1);
    myCar->accelerate(50);
    myCar->shiftGear(2);
    myCar->accelerate(30);
    myCar->brake();
    myCar->stopEngine();

    delete myCar; // Clean up the dynamically allocated memory
    return 0;
}