#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int target, int st,int end){
    if(st<=end){
        int mid= st+(end-st)/2;
        if(target>arr[mid]){
            return BinarySearch(arr,target,mid+1,end);
        }
        else if(target<arr[mid]){
            return BinarySearch(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {-1,0,3,5,7,9,10,13};
    int target = 0;
    int st=0;
    int end=arr.size()-1;
    cout<<BinarySearch(arr,target,st,end);
    return 0;
}