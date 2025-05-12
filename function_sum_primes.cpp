//print all primes from 1 to n using functions
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
    cout << "enter a number"<<endl;
    cin >> n;
    
    int sum;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            sum+=i;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}