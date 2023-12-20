#include<bits/stdc++.h>
using namespace std;

void PrintSubset(int arr[], int n, int idx, vector<int> ans , int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";

            }cout<<endl;
        }
        return;
    }
    PrintSubset(arr, n, idx+1, ans , k );
    ans.push_back(arr[idx]);
    PrintSubset(arr, n, idx+1, ans , k );

}


int main()
{

    int n=5;
    int k=3;
    int arr[n];
    vector <int> v;
        for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    PrintSubset(arr,n,0,v,k);

 return 0;
}