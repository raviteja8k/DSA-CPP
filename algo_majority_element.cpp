// To find the majority element in an array (the element that appears more than n/2 times).
// https://leetcode.com/problems/majority-element
#include <vector>
#include <iostream>


int majorityElement(vector<int>& nums) {
    int count = 0;         // Counter for current candidate
    int majorEl = 0;     // Potential majority element

    for (int val : nums) {
        if (count == 0) {
            majorEl = num;   // Choose a new candidate
        }

        // If current num matches candidate, increment count
        // Otherwise, decrement count
        if(val==majorEl){
                frequency++;
            }else{
                frequency--;
        }
    }

    return majorEl;  // The candidate is the majority element
}

