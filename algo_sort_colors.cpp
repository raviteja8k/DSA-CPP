//sort colors of a given array. 
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

class Solution {
public:
    // there is going to be only 0s, 1s and 2s in the given array
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0; //frequencies for 0,1,2 
        int n=nums.size();

        for(int i=0;i<n;i++){
            if (nums[i]==0){
                count0++; //increasing the count of 0s
            }else if (nums[i]==2){
                count2++; //increasing the count of 2s
            }else{
                count1++; //increasing the count of 1s
            }
        }

        //now we have frequencies of 0s, 1s nd 2s
        //we are updating nums array with no.of 0s, 1s nd 2s in ascending order

        int i=0; //initialising the size of array

        while(count0>0){
            nums[i]=0; //adding 0s to the nums array
            i++; //moving to next array index
            count0--; //decreasing count0s count
        }

        while(count1>0){
            nums[i]=1; //adding 1s to the nums array
            i++; //moving to next array index
            count1--; //decreasing count1s count
        }

        while(count2>0){
            nums[i]=2; //adding 2s to the nums array
            i++; //moving to next array index
            count2--; //decreasing count2s count
        }


    }
};