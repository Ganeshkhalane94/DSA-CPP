//Problem No.31: Next Permutation.
//Time Complexity: O(n) 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector <int> &A){
    int pivot=-1, n= A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        reverse(A.begin(),A.end());
        return;
    }

    for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
      reverse(A.begin()+pivot+1, A.end());
      cout<<pivot<<endl;
    
}

int main(){
    vector <int> A ={2,4,3,5,1};
    nextPermutation(A);

    for(int x : A){
        cout<<x<<" ";
    }
    return 0;
}