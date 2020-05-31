/*
 String Matching in an Array

Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> pairs;
        //check if index j is index i
        for(int i=0;i<paths.size();i++){
            pairs.insert(pair<string,string>(paths[i][0],paths[i][1]));
        }
        //where index j has no index i finish as destination
        string test = pairs[paths[0][0]];
        cout << pairs[test];
        return pairs[paths[0][0]];
    }
};

int main(){
    Solution s;
    vector<vector<string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    s.destCity(paths);
}