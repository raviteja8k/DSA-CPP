// linear search of an array
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i; //breaks for loop and returns i
        }
        
    }
    return -1; //not found
}


int main() {
    //initiate array
    int arr[]={4,5,8,9,12,45};
    int size = 6;
    int target=12; //search for index of 12
    
    cout << linearSearch(arr, size, target) << endl;
    
    return 0;
}