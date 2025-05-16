//check if number is prime using functions
#include <iostream>
using namespace std;


bool isPrime(int n){
    // Numbers less than 2 are not prime
    if (n <= 1) {
        return false;
    }
    
    // Check for divisibility from 2 to square root of n. 
    // Example: for n = 36. Check from i = 2 up to sqrt(36) = 6
    // 36 = 2 × 18, 3 × 12, 4 × 9, 6 × 6
    // After 6, you just get repeats in reverse order.
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