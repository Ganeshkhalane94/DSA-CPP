//Problem no.
//time complexity is O(n^2).
#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> nums, int target){
    int n=nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums= {2,7,11,15};
    int target =26;
    vector<int>ans= PairSum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}