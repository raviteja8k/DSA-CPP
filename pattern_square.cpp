// square pattern using nested loops
// outer loop is number of lines or rows
// innner loop is horizontal or columns
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){ //number of vertical lines
        for(int j = 1; j <= n; j++){ //horizontal columns
            cout << j << " "; // cout * instead of j for * pattern
        }
            cout << endl;
    }
    

    return 0;
}