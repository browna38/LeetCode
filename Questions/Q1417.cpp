/*
 String Matching in an Array

Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {

public:
    string reformat(string s) {
        vector<char> nums = {};
        vector<char> chars = {};
        string newString = "";
        for(int i=0;i<s.length();i++){
            //seperate nums and letters from string
            if(isdigit(s[i])){
                nums.insert(nums.begin(),(s[i]));
            }else{
                chars.insert(chars.begin(),s[i]);
            }
            
        }
        //assemble string from list of nums and letters
        if(nums.size() == 1 && chars.size() == 0 || nums.size() == 0 && chars.size() == 1 ){
            return s;
        }
        if(nums.size()!=0 && chars.size()!=0){

            if(nums.size()>chars.size()){
                string a(nums.begin(),nums.end());
                string b(chars.begin(),chars.end());

                for(int i=0;i<a.length();i++){
                    newString.insert(newString.begin(),a[i]);
                    if(i!=a.length()-1){
                    newString.insert(newString.begin(),b[i]);
                    }
                }
            }else if(nums.size()==chars.size()){
                string a(nums.begin(),nums.end());
                string b(chars.begin(),chars.end());

                for(int i=0;i<a.length();i++){
                    newString.insert(newString.begin(),a[i]);
                    newString.insert(newString.begin(),b[i]);
                    
                }
            }else{
                string b(nums.begin(),nums.end());
                string a(chars.begin(),chars.end());

                for(int i=0;i<a.length();i++){
                    newString.insert(newString.begin(),a[i]);
                    if(i!=a.length()-1){
                    newString.insert(newString.begin(),b[i]);
                }
                }
            }

        }
    return newString;
    }
};

int main(){
    Solution s;
    string str = "covid2019";
    s.reformat(str);
}