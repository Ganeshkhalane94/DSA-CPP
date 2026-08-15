#include<iostream>
using namespace std;
int main(){
    //pointer
    int a=10;
    int *ptr=&a;
    cout<<"Address of a is: "<<ptr<<endl;
    //pointer to pointer
    int **ptr1= &ptr;
    cout<<"Address of pointer ptr is stored inside ptr1 is: "<<ptr1<<endl;
   // int *t= &ptr;
   // cout<<t;
   // Above statement will throw error saying ptr address can not be stored inside a pointer variable.
   // you have to store a pointer's address inside a pointer to pointer variable.
    
   // Dereference operator '*' 
   cout<<"At memory address '"<<ptr<<"' '"<<*(&a)<<"' Value is stored"<<endl;
   cout<<**(ptr1);
   return 0;
}