// pyramid triangle pattern using nested loops
// outer loop is number of lines or rows
// innner loop is horizontal or columns
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){ //number of vertical lines
        //print spaces. from 0 to n-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        
        //print nums set 1. triangle. from 1 to i
        for(int j=1;j<i+1;j++){
            cout << j;
        }
        
        //print nums set 2. inverted triangle. from i-1 to 0
        for(int j=i-1; j>0; j--){
             cout << j;
        }
        
        cout  << endl;
    }
    

    return 0;
}