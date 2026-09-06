//Problem No. 540: Single Element in a Sorted Array.
//Approach: Binary search.
//Time Complexity: O(log n) 
#include<iostream>
#include<vector>
using namespace std;
int SingleElementSortedArray(vector<int>& A){
    int st=0,end=A.size()-1;
    int n=A.size();
    if(n==1){
        return A[0];
    }
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && A[0]!=A[1]){
            return A[mid];
        }
        if(mid==n-1 && A[n-1]!=A[2]){
            return A[mid];
        }

        if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]){
            return A[mid];
        }

        if(mid%2==0){
            if(A[mid-1]==A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(A[mid-1]==A[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
     }
     return -1;
}
int main(){
    vector<int> A={1,1,3,4,4,5,5,6,6};
    cout<<SingleElementSortedArray(A);
    return 0;
}