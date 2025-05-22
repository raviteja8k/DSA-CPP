#include <iostream>
using namespace std;

// A Class is like a template or blueprint for creating objects.
// Object – An object is a real version of the class — created from the blueprint.
// Properties (or Attributes) – These are variables inside the class that describe the object.
// Methods (or Functions) – These are functions inside the class that define what the object can do.


class Car {  //defining class
public:      //can be private or protected
    string color; //properties of class
    int speed;

    void start() { //methods of class
        cout << "Car started" << endl;
    }

    void accelerate() {
        speed += 10;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car myCar;              // object
    myCar.color = "Red";    // property
    myCar.speed = 0;

    myCar.start();          // method
    myCar.accelerate();     // method

    return 0;
}
