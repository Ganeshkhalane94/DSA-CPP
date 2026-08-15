//Problem no 11.
//Time complexity is O(n).
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& heights){
    int n= heights.size();
    int lp=0,rp=n-1;
    int maxWater=0;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(heights[rp],heights[lp]);
        int currWater=w*ht;
        maxWater= max(currWater,maxWater);

        heights[lp]<heights[rp] ? lp++ : rp--;
    }
    return maxWater;
}
int main(){
    vector<int> heights={1,8,6,7,5,4,8,3,7};
    cout<<"maximum water can be stored inside a container is: "<<maxArea(heights)<<" litre";
    return 0;
}