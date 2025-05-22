// Polymorphism allows the same function or method name to behave differently based on the object that calls it.

// Run-time polymorphism  
// -- generally used in inheritance 
// -- Function overriding: Parent and Child have same function but with different implementation. 
//    function in child class gets priority

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        void speak(){
            cout << "Animal speaks" << endl;
        }
        
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Dog barks" << endl;
        }
};

int main(){
    Dog d1;
    d1.speak();
    return 0;
}