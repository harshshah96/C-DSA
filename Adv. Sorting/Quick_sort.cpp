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

void quickSort(int arr[], int si, int ei){ // si= Starting Index; ei= Ending Index
            
            if(si>=ei) return;
            // 5 3 4 2 6 9 8
        int pi= Partition(arr,si,ei);
            // 2 3 4 5 6 9 8
        quickSort(arr,si,pi-1);
        quickSort(arr,pi+1,ei);

}

int main()
{

    int arr[]={5,3,4,2,6,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}