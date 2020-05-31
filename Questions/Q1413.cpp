/*
Minimum Value to Get Positive Step by Step Sum

Given an array of integers nums, you start with an initial positive value startValue.

In each iteration, you calculate the step by step sum of startValue plus elements in nums (from left to right).

Return the minimum positive value of startValue such that the step by step sum is never less than 1.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 1;
        if(nums[0]<0){startValue = abs(nums[0]);}
        bool startValuePass = false;
        vector<int> stepsum = {0};
        int offset = 0;
        while(!startValuePass){
            for(int i=0;i<nums.size();){
                stepsum[0] = nums[0]+startValue;
                offset = abs(stepsum[i]);
                if(stepsum[i]>=1 && i!=(nums.size()-1)){
                    stepsum.insert(stepsum.begin()+i+1,stepsum[i] + nums[i+1]);
                    startValuePass = true;
                    i++;

                }else{
                    if(i=(nums.size()-1) && stepsum[i]>=1){
                        return startValue;
                    }else{
                        
                        startValue+=offset+1;
                        i=0;
                    }
                }
            }
        }
        return startValue;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-30,88,59,-11,-90,-95,-4,9,17,-43,98,-78,8,-75,-99,-78,-82,-42,43,72,82,-98,16,-12,-62,-27,-80,-49,-85,48,-59,12,-85,15,-48,-60,38,71,-56,53,-29,51,-40,33,-95,-50,-5,-41,-20,55,-29,-21,-2,-98,26,59,65,-40,24,-2,-47,90,-86,-90,-62,75,-80,-87,-15,5,-96,-27,-9,-55,37,-44,-49,-85,-77,28,-34,-80,-19,-98,-26,-72,64};
    s.minStartValue(nums);
}