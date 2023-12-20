#include<bits/stdc++.h>
using namespace std;

int Partition (int arr[], int si, int ei){
    // Find the exact location
    int pivotElement = arr[(si+ei)/2];
    int count=0;
    for(int i=si ; i<=ei; i++) {
        if(i==(si+ei)/2) continue;
            if(pivotElement>=arr[i]) count++;
        }

    int pivotIndex = count+si;

    // swap

    swap(arr[(si+ei)/2], arr[pivotIndex]);
    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
    }
    return pivotIndex;
}

int kthSmallest(int arr[], int si, int ei, int k){ // si= Starting Index; ei= Ending Index
            
        
        int pi= Partition(arr,si,ei);

        if(pi+1==k) return arr[pi];
        else if(pi+1 <k) return kthSmallest(arr,pi+1,ei,k);
        else return kthSmallest(arr,si,pi-1,k);
        

}

int main()
{

    int arr[]={5,3,4,2,6,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=5;
    cout<< kthSmallest(arr,0,n-1,k);
    cout<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}