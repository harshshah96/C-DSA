#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={6,4,2,5,1,3,9,7,10,8};
    int n=10;

// Initial display
    for(int i=0; i<n;  i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

// Insertion Sort

    for(int i=1;i<n;i++){
        int j=i;

        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
            
        }
    }
//  Sort display
    for(int i=0; i<n;  i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}