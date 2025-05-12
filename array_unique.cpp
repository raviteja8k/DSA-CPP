// print all unique values of array
#include <iostream>
using namespace std;

int main() {
    int arr[]={5,4,3,2,1,2,4,5,6,7,8,91};
    int size=12;
    
    int unique[size]; //unique array
    int uniqueCount = 0; //count of unique elements
    
    //linear search of each element in array
    for(int i=0; i<size; i++) {
        bool isUnique = true;
        
        //check if current element is already in unique array
        for(int j=0; j<uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isUnique = false;
                break;
            }
        }
        
        //if element is unique, add it to unique array
        if(isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    
    cout << "Unique elements array: ";
    for(int i=0; i<uniqueCount; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}