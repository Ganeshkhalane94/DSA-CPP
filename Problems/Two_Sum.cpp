//Problem No.1: Two Sum.
//Approach: Hashing.
//Time Complexity: O(n) 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector <int> twoSum(vector <int> &arr, int target){
    unordered_map <int,int>m;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int sec = target-first;
        for(int j=i+1;j<arr.size();j++){
            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
             }
             m[first]=i;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {5,2,11,7,15};
    int target = 9;
   vector<int> ans =  twoSum(arr,target);
   for(int x: ans){
    cout<<x<<" ";
   }
    return 0;
}