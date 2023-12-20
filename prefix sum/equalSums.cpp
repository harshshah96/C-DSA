#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,3,5,6,4,8,2,9};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        arr[i]=sum; 

    }
    // cout<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]) {
            flag==true;
            cout<<i+1;
            break;
        }
    }






 return 0;
}