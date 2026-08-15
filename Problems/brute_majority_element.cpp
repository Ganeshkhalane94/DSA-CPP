//Problem no. 169.
//time complexity is O(n^2).
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int el:nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,2,2,1};
    cout<<"Majority element is: "<<majorityElement(nums)<<endl;
    return 0;
}