/* 
    Given an integer array with all element occuring twice except one that occures once. return that element. 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,3,2,4,3,2,5,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=0;
    for(int i=0; i<n; i++){
        result ^= arr[i];
    }
    cout<<result;


 return 0;
}