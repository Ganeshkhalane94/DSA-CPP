#include<iostream>
using namespace std;
void findUnique(int arr[], int n){
    for(int i=0; i<n; i++){
        bool isDuplicate = false;

        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]= {5,6,5,1,6};
    findUnique(arr,5);
    return 0;
}