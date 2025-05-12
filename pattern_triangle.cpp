// triangle pattern using nested loops
// outer loop is number of lines or rows
// innner loop is horizontal or columns
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){ //number of vertical lines
        for(int j = 0; j < i+1; j++){ // horizontal columns
            cout << "*" << " "; //cout j+1 instead of * for numbers triangle
        }
            cout << endl;
    }
    

    return 0;
}