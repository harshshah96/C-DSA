#include<bits/stdc++.h>
using namespace std;


int main()
{

    vector<int> v;
    vector<int> v1;
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;

    cout<<"Enter Inputs : ";
    // INPUTS

    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    
    }
    for(int i=n-1; i>=0; i--){
        int j=0;
        int x=v[i];
        v1.push_back(x);

    }
    
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    cout<<"Reverse araay: ";
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }

 return 0;
}