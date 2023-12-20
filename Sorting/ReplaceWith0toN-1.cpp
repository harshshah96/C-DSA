#include<bits/stdc++.h>
using namespace std;


int main()
{


    int arr[]={-4,-17,-50,1,5,32};
    int n=6;


    vector<int> v(n,0);
    int x=0;
    for(int i=0; i<n; i++){
        int min=INT_MAX;
        int index=-1;

        for(int j=0; j<n; j++){
            if(v[j]==1) continue;
            else {

            if(arr[j]<min){
                min=arr[j];
                index=j;

                }

            }
        }
        arr[index]=x;
        x++;
        v[index]=1;
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }






 return 0;
}