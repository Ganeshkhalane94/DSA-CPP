//Problem No.75: Sort an Array of 0s,1s,2s.
//Approach: DNF Sort
//Time Complexity: O(n) 
#include<iostream>
#include<vector>
using namespace std;
vector <int> dnfSort(vector <int> &nums){
    int n=nums.size();
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++,mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    return nums;
}
int main(){
    vector <int> nums = {2,0,2,1,1,0,1,2,0,0};
    dnfSort(nums);
    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}