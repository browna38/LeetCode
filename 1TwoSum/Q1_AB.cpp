//Question1_AdamBrown
#include <vector>

using namespace std;

class Solution {
    
public:
    std::vector<int> vi;         // This declares a vector of integers
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++){
            for (int j=1;j<nums.size();j++){
                int resultCheck = nums[i] + nums[j];
                if (resultCheck==target){
                    return {i, j};
                    }
                                
            }
        }
        return {0,0};
    }
};