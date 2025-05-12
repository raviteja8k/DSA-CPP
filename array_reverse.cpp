// reverse an array
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    //initiating start and end i.e., 2 pointers meeting 
    int start=0;
    int end = size-1;
    
    while(start < end){ //when 2 pointers meet in midpoint, for even size of array start>end;for odd start=end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[]={5,4,3,2,1};
    int size=5;
    
    reverseArray(arr, size);
    
    cout << "reversed array" << endl;
    for(int i=0;i<size;i++){
        cout<< arr[i] << " " ;
    }
    
    cout << endl;

    return 0;
}