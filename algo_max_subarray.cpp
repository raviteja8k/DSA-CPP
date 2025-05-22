//You are given an array of integers.
// You need to find the maximum sum you can get by adding a continuous subarray (a few elements in a row).

// Using Kadane's algo
// Keep a running total (sum) as you go through the array.
// If sum ever becomes negative, throw it away (reset to 0) — because starting fresh will give a better result.
// At every step, check if your current sum is the biggest you've seen so far.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = INT_MIN; //ans = very small → to track the maximum sum found so far
        int sum=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            sum+=nums[i]; //keep adding each element to sum

            if(sum>ans){ //If sum is bigger than ans, update ans
                ans=sum;
            }

            if(sum<0){ //If sum becomes negative, reset sum = 0
                sum=0;
            }
        }

        return ans;
    }
};