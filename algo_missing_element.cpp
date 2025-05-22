//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
//leetcode.com/problems/missing-number
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

// Create a frequency array (or vector) of size n+1 initialized with zeros.
// For example, if nums = {3, 0, 1}, then n = 3, so freq = {0, 0, 0, 0} (indices 0 to 3).
        vector<int> freq(n+1,0);

        for(int i=0; i<n; i++){
            int curr_ele =  nums[i]; //eg., curr_ele = nums[0] = 3
            freq[curr_ele]++;//eg., freq[3]++ → freq[3] becomes 1. freq = {0, 0, 0, 1}
        }

         for(int i=0;i<=n;i++){
            if(freq[i]==0){ //eg., freq[2] = 0 → number 2 appears zero times
                return i;
            }
         }
         return -1;
    }
};