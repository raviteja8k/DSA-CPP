//check if number is prime using functions
#include <iostream>
using namespace std;


bool isPrime(int n){
    // Numbers less than 2 are not prime
    if (n <= 1) {
        return false;
    }
    
    // Check for divisibility from 2 to square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    cout << isPrime(n) <<endl;
    return 0;
}