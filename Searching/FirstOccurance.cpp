#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,3,3,3,3,4,4,6,6,6,9};
    int size= sizeof(arr)/sizeof(arr[0]);

    int low=0;
    int high=size-1;
    int mid;
    int target;
    cout<<"Enter Target:" ;
    cin>>target;
    bool flag=false;

    while(high>=low){
        mid=low + (high - low)/2;

        if(arr[mid]==target){
            flag=true;
            if(arr[mid-1]==arr[mid]) high=high-1;
            else {
                break;
            }

        }else if(arr[mid]<target){
            low=mid+1;

        }else{
            // arr[mid]>target
            high=high-1;
        }
    }

    if(flag==true){
        cout<<"First occurence of "<<target<<" is at index "<<mid;
    }



 return 0;
}