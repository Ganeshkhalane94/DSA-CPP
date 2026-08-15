//Problem no 11.
//Time complexity is O(n^2).
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& heights){
    int maxWater=0;
    int n=heights.size();
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int w=j-1;
            int h=min(heights[i],heights[j]);
            int curWater = w*h;

            maxWater=max(maxWater,curWater);
        }
    }
    
    return maxWater;
}
int main(){
    vector<int> heights={1,8,6,7,5,4,8,3,7};
    cout<<"maximum water can be stored inside a container is: "<<maxArea(heights);
    return 0;
}