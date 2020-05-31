/*
Minimum Subsequence in Non-Increasing Order

Given the array nums, obtain a subsequence of the array whose sum of elements is strictly greater than the sum of the non included elements in such subsequence. 

If there are multiple solutions, return the subsequence with minimum size and if there still exist multiple solutions, return the subsequence with the maximum total sum of all its elements. A subsequence of an array can be obtained by erasing some (possibly zero) elements from the array. 

Note that the solution with the given constraints is guaranteed to be unique. Also return the answer sorted in non-increasing order.
*/
#include <vector>
#include <string>

using namespace std;


class Solution {
        int vectorSum(vector<int>& nums){
        //find sum of the vector
        int sumTotal = 0;
        for(int i=0;i<nums.size();i++){
            sumTotal += nums[i];
        }
        return sumTotal;
    }
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> subsequence = {};
        vector<int>::iterator it;
        it = subsequence.begin();
        int totalSum = vectorSum(nums);
        int subsequenceCount = 0;
 

        while(vectorSum(subsequence)<=totalSum){
            int findMax = 0;
            int maxIndex = 0;
            //find max element
            for(int i=0;i<nums.size();i++){
                if(findMax<nums[i]){findMax=nums[i];maxIndex=i;}
            }
            //add max element to new vector
        
            if(findMax!=0){
                subsequence.insert(subsequence.begin()+subsequenceCount,findMax);
                subsequenceCount++;
                totalSum-=findMax;
                nums.erase(nums.begin()+maxIndex);
            }

        }
    

    }
};



int main(){
    Solution s;
    vector<int> nums;
    int myarray[] = {4,3,10,9,8};
    nums.insert(nums.begin(), myarray, myarray+5);
    s.minSubsequence(nums);
}