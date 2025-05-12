// swap max and min number of array
#include <iostream>
using namespace std;

int main() {
    int arr[]={5,4,3,2,1};
    int size=5;
    
    int minIndex = 0, maxIndex = 0;
    
    // Find indices of minimum and maximum elements
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    
    cout << "Array before swapping" <<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Swap the elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Swapped array" <<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}