// Given a binary array nums, return the maximum number of consecutive 1's in the array.
// leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0;
        int count=0;
        int n = nums.size();

        for(int i=0;i<n;i++){            
            if(nums[i]==1){
                count++;
                ans=max(ans,count); //answer is max of count and answer
            }else{
                count = 0; //resetting count if element is not 1;
            }
        }

        return ans;
    }
};
