//Problem no. 238.
//time complexity is O(n^2).
#include<iostream>
#include<vector>
using namespace std;
    vector<int>ProductExceptItself(vector<int>&nums){
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    prod*=nums[j];
                }
            }
            ans[i]=prod;
        }
        return ans;
    }
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result=ProductExceptItself(nums);
    for(int val: result){
        cout<<val<<" ";
    }

    return 0;
}