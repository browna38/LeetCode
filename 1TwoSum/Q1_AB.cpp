<<<<<<< HEAD
//Question1_AdamBrow
=======
//Question1_AdamBrown
//Runtime: 1556 ms, faster than 5.31% of C++ online submissions for Two Sum.
//Memory Usage: 7.2 MB, less than 100.00% of C++ online submissions for Two Sum.

//
//Big O(n^2)
//


>>>>>>> 7ea564853dfb72c13b91bd8b18d4d77b8fcf1840
#include <vector>

using namespace std;

class Solution {
    
public:
    std::vector<int> vi;         // This declares a vector of integers
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++){
            for (int j=1;j<nums.size();j++){
                int resultCheck = nums[i] + nums[j];
                if (resultCheck==target && i!=j){
                    return {i, j};
                    }
                                
            }
        }
        return {0,0};
    }
};
