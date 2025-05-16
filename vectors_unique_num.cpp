// leetcode.com/problems/single-number
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){ //iterating for loop
            ans^=val; //using XOR bitwise operator for finding unique value
            // n^n = 0; n^0=n. eg., 2^2=0. cancels duplicate value;  4^0=4. returns unique value
        }

        return ans;
    }
};