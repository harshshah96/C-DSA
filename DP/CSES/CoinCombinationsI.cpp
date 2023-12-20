#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector<long long int> dp;
    dp.clear();
    int n,k;
    cin>>n>>k;
    vector<int> coins(n);
    
    dp.resize(k+1,0);
    dp[0]=1;
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    for(int i=1; i<=k; i++){
        for(int j=0; j<n; j++){
            if(coins[j]>i) break;
            dp[i]=(dp[i] + dp[i-coins[j]]) % 1000000007;
        }
    }
    cout<<dp[k];
 return 0;
}
