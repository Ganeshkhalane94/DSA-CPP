#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector <int>& prices){
    int maxProfit=0,bestBuy=prices[0];
    int n=prices.size();

    for(int i=1;i<n;i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxProfit;
}
int main(){
    vector <int> prices={7,1,5,3,6,4};
    cout<<"Maximum profit after buying low and selling high: "<<maxProfit(prices);
    return 0;
}