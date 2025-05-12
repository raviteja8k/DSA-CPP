// reverse triangle pattern using nested loops
// outer loop is number of lines or rows
// innner loop is horizontal or columns
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){ //number of vertical lines
        for(int j = n; j > i; j--){ //horizontal columns
            cout << j << " "; // cout * instead of j for * pattern
        }
            cout << endl;
    }
    

    return 0;
}