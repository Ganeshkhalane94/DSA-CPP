#include<iostream>
using namespace std;
void foo(int n){
    if(n>1){
        foo(n/2);
        foo(n/2);
    }
    cout<<"\t*";
}

int main(){
   // print(3);
    foo(5);
    return 0;
    
}