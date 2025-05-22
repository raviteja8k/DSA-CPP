// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// leetcode.com/problems/rotate-array

//Instead of moving each element one by one (which is slow), we use reverse. eg. [1,2,3,4,5,6,7]
        // Step 1: Reverse the whole array eg., [7, 6, 5, 4, 3, 2, 1]
        // Step 2: Reverse first k elements (first 3) eg.,  [5, 6, 7, 4, 3, 2, 1]
        // Step 3: Reverse the remaining n-k elements eg., [5, 6, 7, 1, 2, 3, 4]

class Solution {
public:

    void reverseArray(vector<int>& nums, int start, int end){

        while(start < end){ // start and end pointers meet at the middle
            swap(nums[start], nums[end]); //swapping elements first and last
            start++;
            end--;
        }

    }

    void rotate(vector<int>& nums, int k) {
        //Instead of moving each element one by one (which is slow), we use reverse.
        // Step 1: Reverse the whole array
        // Step 2: Reverse first k elements
        // Step 3: Reverse the remaining n-k elements

        int n=nums.size();
        k = k % n; // in case k > n

        reverseArray(nums, 0, n-1); //Reverse the whole array
        reverseArray(nums, 0, k-1); //Reverse first k elements
        reverseArray(nums, k, n-1); //Reverse the rest
    }
};