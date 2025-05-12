#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a" << endl;
    cin >> a;
    // check if a is +ve number
    (a > 0) ? cout << "a is positive" : cout << "a is negative";
    
    return 0;
}