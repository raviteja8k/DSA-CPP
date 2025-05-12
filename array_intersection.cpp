// print intersection of 2 arrays
#include <iostream>
using namespace std;

int main() {
    int arr[]={5,4,3,2,1,2,4,5,6,7,8,9};
    int size=12;

    int arr2[]={2,1,2,4,5}; //second array
    int arr2Count = 5; //size of second array

    cout << "Intersection of arrays: ";
    
    // Find and print intersection
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < arr2Count; j++) {
            if(arr[i] == arr2[j]) {
                cout << arr[i] << " ";
                // Mark the element in arr2 as visited to avoid duplicates
                arr2[j] = -1;
                break;
            }
        }
    }
    cout << endl;

    return 0;
}

    
    