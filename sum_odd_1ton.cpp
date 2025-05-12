// print sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){  // Check if number is odd
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nSum of odd numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}