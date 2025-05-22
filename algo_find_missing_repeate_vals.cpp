//in a given 2d matrix where elements are jumbled, but in sequence, find missing and repeated vals 
//leetcode.com/problems/find-missing-and-repeated-values

//this solution is O(N ^ 2) using frequency array

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        //using frequency array to find the elements
        int n = grid.size();
        int total = n * n;//total no.of elements in matrix
        vector<int> freq(total + 1, 0); // For 1 to n*n

        int repeated_element =0, missing_element =0; //initiating answer

        // Count frequencies of all numbers in the grid
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                int curr_ele =grid[i][j];
                freq[curr_ele]++;
            }
        }

        // Find the missing and repeated numbers
        for(int i=1;i<=total;i++){
            if(freq[i]==0){
                missing_element=i;
            }else if(freq[i]>1){
                repeated_element=i;
            }
        }
        return {repeated_element, missing_element};
    }
};