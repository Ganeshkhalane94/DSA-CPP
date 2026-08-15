//Problem no. 169.
//time complexity is O(n log n).
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>&nums){
    int n=nums.size();
    

    sort(nums.begin(),nums.end());
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
vector<int> nums={1,2,2,2,1};
    cout<<"Majority element is: "<<majorityElement(nums)<<endl;
    return 0;
}