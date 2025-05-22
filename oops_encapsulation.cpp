//Encapsulation = "Hide the data, expose only what’s needed."

//Definition: Encapsulation wrapping data (variables) and methods (functions) into a single unit — a class — and restricting access to some of the details.

// Use 'private' to hide data, and 'public' methods to interact with it.

// It's one of the 4 pillars of OOP (along with Inheritance, Polymorphism, Abstraction).

// Imagine a medicine 'capsule'.
// -You can take it (use it),
// -But you can’t open it to see or change what’s inside.
// -That's encapsulation — using something without needing to know or change how it works inside.

#include <iostream>
using namespace std;

class BankAccount {
private:            // Hidden from outside
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int amount) {
        if (amount > 0)
            balance += amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAcc;
    myAcc.deposit(1000);              // access through method
    cout << myAcc.getBalance();       // access through method
    // myAcc.balance = 100000;        ❌ NOT allowed (private data)
    return 0;
}
