//Time complexity is O(n)
#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> &nums, int target){
    int n=nums.size();
    vector<int> ans;
    int i=0,j=n-1;
    while(i<j){
        int PairSum = nums[i]+nums[j];
        if(PairSum>target){
            j--;
        }
        else if(PairSum<target){
            i++;
         }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums= {2,7,11,15};
    int target =9;
    vector<int>ans= PairSum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    cout<<"Time complexity is O(n)";
    return 0;
}