#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target){
        int n=arr.size();
         int high=n-1;
         int low=0;
         int pivot=-1;

// for only 2 elements
        if(n==2){
            if(arr[0]==target) return 0;
            else if(arr[1]==target) return 1;
        }

//finding the pivot for rest cases:
        while(high>=low){
            int mid= low +(high-low)/2;
            if(mid==0)low=mid+1;
            else if(mid==n-1)high=mid-1;
            else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                pivot=mid+1;
                break;
            }else if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
                pivot=mid;
                break;
            }if(arr[mid]<arr[high])high=mid-1;
            else if(arr[mid]>arr[high])low=mid+1;
        }

        //if the array is already sorted ie either no rotations or number of rotations will be integral multiple of size of array then pivot will not be found. Hence it will have value (-1).
        // Normal searching can solve.

        if(pivot==-1){
            // regular searching.
            // search the entire array.

            high=n-1;
            low=0;
             while(high>=low){
                int mid= low +(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]<target) low=mid+1;
                else high=mid-1;
            }
        
        }else{
            if(target>=arr[0] && target<=arr[pivot-1]){
            high=pivot-1;
            low=0;
             while(high>=low){
                int mid= low +(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]<target) low=mid+1;
                else high=mid-1;

            }
            }else if(target>=arr[pivot] && target<=arr[n-1]){
            high=n-1;
            low=pivot;
             while(high>=low){
                int mid= low +(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]<target) low=mid+1;
                else high=mid-1;

            }
        } 
    }
    return -1;
}

int main(){

    int arr[]={10,15,1,2,3,5,7,8};
    vector <int> array;
    for(int i=0; i<sizeof(arr); i++){
        array.push_back(arr[i]);
    }
    cout<<search(array, 15);

}


