//Time Complexity is O(log)
#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int target){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(target>arr[mid]){
            st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {-1,0,3,5,7,9,10,13};
    int target = 10;
    cout<<BinarySearch(arr,target);
    return 0;
}