#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,3,5,6,4,8,2,9};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        brr[i]=sum;
        cout<<brr[i]<<" ";

    }
    cout<<endl;




 return 0;
}