// print sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;

int main(){
    int a, sum;
    cout << "enter a: " << endl;
    cin >> a;

    for(int i=1; i<=a; i++){
        sum+=i;
    }
    
    cout << "sum is " << sum << endl;

    return 0;
}