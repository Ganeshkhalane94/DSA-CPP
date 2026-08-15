#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector <int>&nums){
    int currSum=0,maxSum=INT_MIN;
    for(int val: nums){
        currSum+=val;
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main(){
    vector<int> vec= {3,-4,5,4,-1,7,-8};
    cout<<"Maximum subarray sum is ="<<maxSubArray(vec)<<endl;
    int currSum=0,maxSum=INT_MIN;
    for(int val: vec){
        currSum+=val;
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Maximum subarray sum is = "<<maxSum;
    vec.push_back(25);
    cout<<"\n Capacity = "<<vec.capacity();
    cout<<"\n Time complexity is O(n)";
    return 0;
}