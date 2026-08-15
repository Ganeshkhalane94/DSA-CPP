#include <iostream>
using namespace std;
int a,b;
int largest=0;
int smallest=INT_MAX;
// void changeArr(int marks[], int size){
//     cout<<"In function:\n";
//     for(int i=0; i<size; i++){
//         marks[i]=2*marks[i];
//     }
// }
int linearSearch(int marks[], int size){
    int target;
    cout<<"Enter the target: \n";
    cin>>target;
    for(int i=0; i<size; i++){
        if(marks[i]==target){
            return i;
        }
    }
    return -1;
}
void reverseArr(int marks[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(marks[start],marks[end]);
        start++;
        end--;
    }
}
int main(){
    int marks[5];
    int marks1[5]={5, 15, 16, 1, 20};
    cout<<"Enter the marks: "<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>marks[i];
    }
    // changeArr(marks,5);
cout<<largest;
    for(int i=0;i<5;i++){
        if(largest<marks[i]){
            largest=marks[i];
        }
       
    }
    for(int i=0;i<5;i++){
    largest = max(marks[i],largest) ;
    smallest = min(marks[i],smallest);    
     }
cout<<"Largest number is: "<<largest<<endl;
cout<<"Smallest number is: "<<smallest<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++)
    {
    cout<<" \n"<<marks[i];
    }
    // cout<< linearSearch( marks1,5)<<endl;
    cout<<"Reversed array:\n";
    reverseArr(marks,5);
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}

