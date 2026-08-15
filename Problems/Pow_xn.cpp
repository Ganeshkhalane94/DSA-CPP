//Problem number 50.
//time complexity is O(log n).



#include<iostream>
using namespace std;
double myPow(double x, int n){
    if(x==0)return 0;
    if(n==0)return 1;
    if(x==1 && n%2!=0)return -1;
    if(x==1 && n%2==0)return 1;

    long binForm = n;
    if (n<0){
        x=1/x;
        binForm=-binForm;
    }
    double ans = 1;

    while(binForm>0){
        if(binForm%2 == 1){
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }

    return ans;
}
int main(){
    double x;
    int n;
    cout<<"Enter power: \n";
    cin>>n;
    cout<<"Enter the base: \n";
    cin>>x;

    cout<<myPow(x,n);
    return 0;
}