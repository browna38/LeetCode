/*
 String Matching in an Array

Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        bool check = false;

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<target.size();j++){
                if(arr[i]==target[j]){
                    check = true;
                    break;
                }else if(check!=true && j==(target.size()-1)){
                    return false;
                }
            }
            check = false;
            
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> target = {1,2,3,4};
    vector<int> arr = {1,1,1,1};
    s.canBeEqual(target,arr);
}