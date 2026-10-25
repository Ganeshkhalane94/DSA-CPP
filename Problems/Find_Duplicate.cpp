//Problem No.287:Find Duplicate.
//Approach:Slow fast pointer.
//Time Complexity: O(n). 
#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> & arr){
    int slow=arr[0], fast= arr[0];
    do{
        slow=arr[slow];// +1
        fast=arr[arr[fast]];// +2
    }while(slow!=fast);
    slow=arr[0];
    while (slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    vector<int> arr={3,1,4,1,2};
    int ans= findDuplicate(arr);
    cout<<ans;
    return 0;
}