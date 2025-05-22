// Abstraction: Hiding the complex details and showing only the essential features

// Abstract class is only used to define interface/blueprint for child classes.
// We can't create objects from abstract class. If the class has a pure virtual function, it is an abstract class

#include <iostream>
using namespace std;

// Abstract class (cannot be directly used to create objects)
class Animal {
public:
    virtual void makeSound() = 0;  // pure virtual function
    // A pure virtual function is a function declared in a base class, but it has no definition there
    // Child classes must write their own version
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d; //a now points to Dog object
    a->makeSound();  // Output: Dog barks

    a = &c; //a now points to Cat object
    a->makeSound();  // Output: Cat meows

    return 0;
}
