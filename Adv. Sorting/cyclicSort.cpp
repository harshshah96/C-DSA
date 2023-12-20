#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[]={1,3,4,2,5,9,6,8,7};
    int n=sizeof(a)/sizeof(a[0]);

        for(int i=0; i<n; i++){
        cout<<a[i]<<" ";

    }

    // cyclic sort
    // time complexity is O(n)
    // can be applied to sort 1 to n numbers or 0 to n numbers
    // cannot sort random numbers

    int i=0;
    while(i<n){
        int correctIndex =a[i]-1;
        if(i==correctIndex)i++;
        else swap(a[i],a[correctIndex]);

    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";

    }



 return 0;
}