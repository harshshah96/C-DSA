#include<bits/stdc++.h>
using namespace std;

void display (vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main()
{

    vector<int> v;
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
    
    // for(int i=n-1; i>=0; i--){
    //     int j=0;
    //     int x=v[i];
    //     v1.push_back(x);

    // }
    
    // // for(int i=0; i<n; i++){
    // //     cout<<v[i]<<" ";
    // // }
    // // cout<<endl;

    // cout<<"Reverse araay: ";
    // for(int i=0; i<n; i++){
    //     cout<<v1[i]<<" ";
    // }

    int i=0;
    int j=v.size()-1;

    display(v);

    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
    cout<<endl;
    display(v);

 return 0;
}