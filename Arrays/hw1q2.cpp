#include<iostream>
using namespace std;
void swapmaxmin(int arr[], int size){
    int largestid=0;
    int smallestid=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[largestid])
            largestid=i;
        if(arr[i]<arr[smallestid])
            smallestid=i;
    }
    int temp=arr[largestid];
        arr[largestid]=arr[smallestid];
        arr[smallestid]=temp;
}
int main(){
    int arr[] = {1,3,2,4,5};
    swapmaxmin(arr,5);
    cout<<"After swapping array elements: \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}