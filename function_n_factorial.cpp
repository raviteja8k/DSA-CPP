// use functions to return n factorial
#include <iostream>
using namespace std;

int factorial(int n){
    int fac=1;

    for(int i=1; i<=n; i++){
        fac*=i;
    }

    return fac;
}

int main(){
    int a;
    cout << "enter a: " << endl;
    cin >> a;
    cout << factorial(a) << endl;
    return 0;
}