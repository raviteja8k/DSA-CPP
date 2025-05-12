// factorial of n
#include <iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
       
            factorial *= i;
            cout << i << " ";
        
    }
    cout << "\nfactorial of " << n << " is: " << factorial << endl;

    return 0;
}