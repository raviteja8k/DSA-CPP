//an array and a target are given. need to return indices of values that, when added, return target
//For nums = [2, 7, 11, 15], target = 9.  return {0, 1}
//first leetcode problem named Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        int n=nums.size();
        map<int, int> hash; //initiating hashmap

        for(int i=0;i<n;i++){
            int second_val = target - nums[i]; //if 9 is target and 2 is nums[i], then second val should be target - nums[i]

            if(hash.find(second_val)!=hash.end()){ //checking if the value is in hashmap
                    return {hash[second_val], i};
            }else{
                hash[nums[i]] = i; //adding value to hashmap. hash.insert({nums[i], i});. eg., stores value 2 to the 0th index
            }

        }
        return {};
    }
};