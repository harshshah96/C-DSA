#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={6,4,2,5,1,3,9,7,10,8};
    int n=10;

// Selection and Insertion Sort

    for(int i=0; i<n-1; i++){
    int min= INT_MAX;
    int temp;
        for(int j=i; j<n; j++){
            
            if(arr[j]<min){
                min=arr[j];
                temp=j;
            }
        
        }

    swap(arr[i],arr[temp]);
    }

//  Display
    for(int i=0; i<n;  i++){
        cout<<arr[i]<<" ";
    }


 return 0;
}