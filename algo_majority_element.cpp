// To find the majority element in an array (the element that appears more than n/2 times).
// Boyer–Moore Voting Algorithm
// https://leetcode.com/problems/majority-element
#include <vector>
#include <iostream>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;         // Counter for current candidate
    int majorEl = 0;     // Potential majority element
    int frequency;

    //nums = [3, 3, 4, 2, 3, 3, 3]
    //Here, 3 appears 5 times. Total numbers = 7.
    //Since 5 > 7/2 = 3.5, 3 is the majority element.

    for (int num : nums) {
        if (count == 0) {
            majorEl = num;   // set majorEl = current number
        }

        // If current num matches candidate, increment count
        // Otherwise, decrement count
        if(num==majorEl){
                count++;
            }else{
                count--;
        }
    }

    return majorEl;  // The candidate is the majority element
}

