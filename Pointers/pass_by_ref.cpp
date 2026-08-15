#include<iostream>
using namespace std;
void change(int* a){
    //pass by reference using pointer.
    *a=20;
}
void Change(int &b){
    //pass by reference using reference(alias).
    b=90;
}
int main(){
    int a=10;
    int b=50;
    change(&a);
    Change(b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}