#include<bits/stdc++.h>
using namespace std;

bool check(int mid,vector<int>& piles, int h ){
         int n=piles.size();
         int m=mid;
         int count=0;
         int i=0;
         while(i<n){
             if(piles[i]>=m){
                 piles[i]-=m;
                 count++;

             }else{// piles[i]<m
                    piles[i]=0;
                    count++;
             }
             if(piles[i]==0) i++;
         }
         if(count<=h)return true;
         else return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int min=INT_MAX;
        int sum=0;

        for(int i=0; i<n; i++){
            if(piles[i]<min) {
                min=piles[i];
            }
            sum+=piles[i];
        }

        int low=min;
        int high =sum;
        int isCapacity;
        while(low<=high){
            int mid= low + (high - low)/2;

            if(check(mid,piles,h)==true){
                high=mid-1;
                isCapacity=mid;

            }else low=mid+1;

        }
        return isCapacity;

    }

int main()
{
   int  arr[] = {3,6,7,11};
   vector <int> piles;
   
   for(int i=0; i<sizeof(arr); i++){
    piles.push_back(arr[i]);
   }


   cout<<minEatingSpeed(piles, 8);



 return 0;
}