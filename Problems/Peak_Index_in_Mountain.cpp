//Problem No. 852: Peak Index in Mountain Array.
//Approach: Binary search.
//Time Complexity: O(log n) 
#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountain(vector<int>& A){
    int st=1,end=A.size()-2;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid-1]>A[mid]&& A[mid]>A[mid+1]){
        return mid;
       }
       else if(A[mid-1]<A[mid]){
        st=mid+1;
          }
        else{
        end=mid-1;
         }
   }
    return -1;
}
int main(){
    vector<int> A={0,3,8,9,5,2};
    cout<<peakIndexInMountain(A);
    return 0;
}