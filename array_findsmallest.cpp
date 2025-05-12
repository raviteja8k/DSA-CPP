// find smallest value in array
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[]={5,12,22,-15,18};
    int size = 5;
    int smallest = INT_MAX; //int_max is a infinite number which is largest there is
    int largest = INT_MIN; //int_min is a infinite number which is smallest there is
    
    for(int i=0;i<size;i++){
        // if(nums[i]<smallest){ //checking is smallest is smaller than nums[i]
        //     smallest=nums[i];
        // }

         smallest = min(nums[i],smallest); //this does exactly as the if condition commented above
         largest = max(nums[i],largest);
    }
    
    cout << "smallest value of array is " << smallest <<endl;
    cout << "largest value of array is " << largest <<endl;

    return 0;
}