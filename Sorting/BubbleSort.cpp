#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
cout<<"Enter the inputs: ";
// Inputs for the array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<endl;

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


// Bubble Sort

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  return 0;
}