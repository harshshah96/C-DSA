#include<bits/stdc++.h>
using namespace std;
vector<int> pages;
vector<int> prices;
vector<vector<int>> dp;
int f( int i, int cost ){
    if (i == pages.size() || cost <= 0 || cost < prices[i] )
        return 0;
 
    if (dp[i][cost] != -1)
        return dp[i][cost];
 
    int withoutCurrentBook = f(i + 1, cost);
    int withCurrentBook = 0;
 
    if (cost >= prices[i])
        withCurrentBook = pages[i] + f(i + 1, cost - prices[i]);
 
    return dp[i][cost] = max(withoutCurrentBook, withCurrentBook);
}
int main()
{   
    dp.clear();
    
    int n,maxCost;
    cin>>n>>maxCost;
    dp.resize(1005,vector<int>(100005,-1));
    prices.clear();
    pages.clear();
    prices.resize(n);
    pages.resize(n);

    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    for(int i=0; i<n; i++){
        cin>>pages[i];
    }
    cout<<f(0,maxCost);
    
 return 0;
}