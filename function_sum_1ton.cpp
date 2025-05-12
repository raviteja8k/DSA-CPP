// use functions to return sum from 1 to n
#include <iostream>
using namespace std;

int sum(int n){
    int sum;

    for(int i=1; i<=n; i++){
        sum+=i;
    }

    return sum;
}

int main(){
    int a;
    cout << "enter a: " << endl;
    cin >> a;
    cout << sum(a) << endl;
    return 0;
}