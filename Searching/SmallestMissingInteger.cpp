#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);

    int low=0;
    int high=size-1;
    int mid;
    int ans=-1;

    while(high>=low){
        mid=low + (high - low)/2;
        if(arr[mid]==mid) low++;
        else{
            ans=mid;
            high--;
        }
    }
    cout<<ans;


 return 0;
}