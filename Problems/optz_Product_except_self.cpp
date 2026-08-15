//Problem no. 238.
//time complexity is O(n) with optimized space complxity of O(1).
#include<iostream>
#include<vector>
using namespace std;
    vector<int>ProductExceptItself(vector<int>&nums){
        int n=nums.size();
        vector<int> ans(n,1);
        int suffix=1;
        // calculating prefix and directly multiplying it with element of ans.
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //calculating suffix and again multiplying it with ans elements.
        for(int i=n-2;i>=0;i--){
            suffix=suffix*nums[i+1];
            ans[i]=ans[i]*suffix;
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