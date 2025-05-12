// inverted triangle pattern using nested loops
// outer loop is number of lines or rows
// innner loop is horizontal or columns
#include <iostream>
using namespace std;

int main(){
    int n = 0, num = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){ //number of vertical lines
        //print spaces. i.e., i times
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        
        //print nums i.e., n-i times
        for(int j=i+1; j<n; j++){
            cout << i+1 ;
        }
        
        cout << endl;
    }
    

    return 0;
}