// A destructor is a special function in a class that runs automatically when an object is destroyed.
// It’s used to clean up memory or resources that the object was using.

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { //constructor
        cout << "Constructor: Object created\n";
    }

    ~Demo() { //destructor
        cout << "Destructor: Object destroyed\n";
    }
};

int main() {
    Demo d1;  // constructor called
    // destructor will be called automatically here when main ends
}
