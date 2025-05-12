// print sum of all numbers divisible by 3
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){  // Check if number is odd
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nSum of all numbers divisible by 3 from 1 to " << n << " is: " << sum << endl;

    return 0;
}