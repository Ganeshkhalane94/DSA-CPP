#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4};
    int* ptr = a;
    int b=10,c=12;
    int* ptr2=&b;
    int* ptr3=&c;
    cout<<*(ptr)<<endl;//1
    cout<<*(ptr+2)<<endl;//3
    ptr++;
    cout<<*ptr<<endl;//2
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
    cout<<ptr2-ptr3<<endl;
    return 0;
}