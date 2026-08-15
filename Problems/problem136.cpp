#include <iostream>
#include <vector>
using namespace std;
int main(){
    int ans=0;
    vector<int> vec={1,2,2,1,5};
    for (int val: vec){
        ans=ans^val;
    }
   cout<<ans;
    
    
    return 0;
}