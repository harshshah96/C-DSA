#include<bits/stdc++.h>
using namespace std;

void findUniqueElement(int *nums, int n){
    int res=0;
    for(int i=0; i<n; i++) res=res^nums[i];
    int temp=res;
    int k=0;
    while(1){
        if((temp & 1)==1){
            break;
        }
            k++;
            temp=temp/2;
        
    }
    int ans1=0;
    for(int i=0; i<n; i++){
        int num = nums[i];
        if((num & (1*pow(2,k)) == 1)) ans1^=num;
    }
    cout<<ans1<<" ";
    res=res^ans1;
    cout<<res<<endl;

}

int main()
{
    int arr[]={1,3,5,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    findUniqueElement(arr,n);

 return 0;
}