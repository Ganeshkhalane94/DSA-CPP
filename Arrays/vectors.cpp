#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3};
    cout << vec[0]<<endl;
    vec.push_back(35);
    vec.push_back(34);
    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<"Size = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(3)<<endl;
    vec.push_back(38);
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;
    return 0;
}