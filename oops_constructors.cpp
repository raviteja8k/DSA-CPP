//A constructor is a special function in a class 
// It automatically runs when you create an object.
// It’s used to initializing variables in a class. Like set default values to object when created

//Constructor name must match the class name
//No return type	
#include <iostream>
using namespace std;

class Car {
public:
    string model;

    // Default constructor
    Car() {
        model = "Unknown";
    }

    // Parameterized constructor
    Car(string m) {
        model = m;
    }

    void showModel() {
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car c1;           // uses default constructor
    Car c2("Tesla");  // uses parameterized constructor

    c1.showModel();   // Output: Unknown
    c2.showModel();   // Output: Tesla
}



