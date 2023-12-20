#include<bits/stdc++.h>
using namespace std;



int main()
{
    int x;
    cout<<"Enter the Number whose doublet sum is present : ";
    cin>>x;

    vector<int> v;
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;


    // INPUTS

    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);

    }

    for(int i=0 ; i<n; i++){
        int j=i;
      
        for(int k=0; k<n-i; k++){
        
        if(v[i]+v[j]==x){
            cout<<"("<<i<<", "<<j<<")"<<endl;
            
        }
        j++;
        }
    }

    return 0;
}