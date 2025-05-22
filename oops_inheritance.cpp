// Inheritance = Child class reuses Parent class

// Helps you write less code

// Keeps your program organized and clean

// Use when multiple classes share common features


#include <iostream>
using namespace std;

class Animal {  // Base or parent class
public:
    void eat() {
        cout << "This animal eats food\n";
    }
};

class Dog : public Animal {  // Derived or child class
public:
    void bark() {
        cout << "The dog barks\n";
    }
};

int main() {
    Dog d;
    d.eat();   // inherited from Animal
    d.bark();  // own method
}
