// sum and product of all numbers in array
#include <iostream>
using namespace std;

int sumArr(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int productArr(int arr[], int size){
    int product = 1;
    for(int i = 0; i < size; i++){
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[]={5,4,3,2,1};
    int size=5;
    
    cout << "Sum of array elements " << sumArr(arr,size) << endl;
    cout << "Product of array elements " << productArr(arr,size) << endl;

    return 0;
}