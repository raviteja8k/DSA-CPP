//rearrange given array such that postive numbers are in even places and -ve numbers are in odd places
//nums = [3,1,-2,-5,2,-4]
//nums = [3,1,-2,-5,2,-4]
//leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int arraySize=nums.size();
        vector<int> ans(arraySize);

        int p=0, n=1; //initiating positive and negative indexes
        //we will have positive numbers in even position and 
        //-ve numbers in odd position

        for(int i=0;i<arraySize;i++){
            if(nums[i]>0){ //checking if positive element
                ans[p] = nums[i]; //move positive numbers to even index
                p+=2; //updating positive index to 2. i.e. even
            }else{ //if negative number
                ans[n] = nums[i]; //move -ve numbers to odd index
                n+=2;
            }
        }

        return ans;
    }
};