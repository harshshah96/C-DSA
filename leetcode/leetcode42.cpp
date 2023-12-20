#include<iostream>
using namespace std;



int main()
{   int n=12;
    int arr[n]={0,1,0,2,1,0,1,3,2,1,2,1};
    int prev[n];
    int max=arr[0];
    prev[0]=-1;
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<arr[i]){
            max=arr[i];
        }
    }

    
    prev[n-1]=-1;
    max=arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(max<prev[i] ) prev[i]=max;
        if(max<arr[i]) max=arr[i];
    }

/* //     for(int i=0; i<n; i++){
//         cout<<prev[i]<<" ";
// }
 */


//calculating water

int volume=0;
for(int i=1; i<n-1;i++){
    if(prev[i]>arr[i]) volume= volume +( prev[i]-arr[i]);

}

cout<<volume;


return 0;}
