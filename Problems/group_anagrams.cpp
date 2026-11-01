//Problem No.49: Group Anagrams.
//Approach: Two strings are anagrams if their sorted characters are same.
//Time Complexity: O(n* k log k). 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;
vector<vector<string>>groupAnagrams(vector<string>& strs){
    unordered_map<string,vector<string>>mp;
    for(string str:strs){
        string key=str;
        sort(key.begin(),key.end());
        mp[key].push_back(str);
    }
    vector<vector<string>> result;
    for(auto &it :mp){
        result.push_back(it.second);
    }
    return result;
}
int main(){
    vector <string> str={"eat","ate","tea","bat","nat","tan"};
    vector<vector<string>> res= groupAnagrams(str);
    for (auto group : res) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
return 0;
}