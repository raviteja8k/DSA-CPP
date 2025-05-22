// Polymorphism allows the same function or method name to behave differently based on the object that calls it.

// Compile-time polymorphism  
// -- Constructor overloading: Defining 2 constructors with different parameters
// -- Function overloading: Defining 2 constructors with different parameters

#include <iostream>
#include <string>
using namespace std;

class Sum{
    public:
        void add(int a, int b){
            cout << "Answer is " << a+b << endl;
        }

        void add(string a, string b){
            cout << "Answer is " << a+b << endl;
        }
};


int main(){
    Sum s1;
    s1.add(4, 5);
    s1.add("C", "PP");
    return 0;
}