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
    bool checkSubstring(string substring, string word){
        for(int k=0;k<=(word.size()-substring.size()+1);k++){
            if(word.substr(k,substring.size())==substring){
                return true;
            }
        }
        return false;
    }
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> substringVector;
        //check each word[i] element in the vector of strings as a substring of it's length
        for(int i=0;i<words.size();i++){
            string substringWordCurr = "";
            //get the substring size of the current vector string element
            substringWordCurr = words[i];
            //check if this current string element is a substring of any other element in vector string words[j]
            for(int j=0;j<words.size();j++){
                if(substringWordCurr.size()<words[j].size()){
                    if(checkSubstring(substringWordCurr,words[j])){
                        substringVector.push_back(substringWordCurr);
                        j=words.size();
                    }
                    }
            }
        }
        return substringVector;
    }
};

int main(){
    Solution s;
    vector<string> words = {"leetcoder","leetcode","od","hamlet","am"};
    s.stringMatching(words);
}