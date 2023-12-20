// SORT COLORS 
/* 
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.  We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. You must solve this problem without using the library's sort function. 
*/

#include<bits/stdc++.h>
using namespace std;

void SortColors(vector  <int> v){
    int n=v.size();
    //  declaring parameters
    int low=0;
    int high=n-1;
    int mid=((n-1)/2)+1;

    while(mid>low || mid<high){
            while(v[mid]==1){
                while(v[mid]==1 && (v[low]==0 || v[high]==0)) {
                    if(v[mid]==1 && v[low]==0 )low++;
                    if(v[mid]==1 && v[high]==2) high--;
                }
                while(v[mid]==1 && (v[low]==1 || v[high]==1)) {
                    if(v[mid]==1 && v[low]==0 )low++;
                    if(v[mid]==1 && v[high]==2) high--;
                }
                while(v[mid]==1 && (v[low]==0 || v[high]==2)) {
                    if(v[mid]==1 && v[low]==0 )low++;
                    if(v[mid]==1 && v[high]==2) high--;
                }

            }

           while(v[mid]==0 && (v[low]==0 || v[high]==2)) {
                if(v[mid]==0 && v[low]==0 )low++;
                if(v[mid]==0 && v[high]==2) high--;
            }


                


                
            }




        
}




 