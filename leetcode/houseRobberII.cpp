#include<bits/stdc++.h>
using namespace std;

int z;
int x;
vector <vector<int>> dp;
    int ftd(vector<int> arr, int i , int end){
        z++;
        int n=arr.size();
        if(i>end) return 0;
        if(i==end) return arr[i];
        if(i== end-1) return max(arr[i],arr[i+1]);

        if(dp[i][end-n+2]!=-1) return dp[i][end-n+2];
        x++;

        return dp[i][end-n+2]=max(arr[i]+ftd(arr,i+2,end), 0+ ftd(arr,i+1,end));
        //return max(arr[i]+ftd(arr,i+2,end), 0+ ftd(arr,i+1,end));
    }

    int rob(vector<int>& nums) {

        int n=nums.size();
        dp.clear();
        dp.resize(nums.size(),vector<int>(2,-1));
        return max(nums[0]+ftd(nums, 2,n-2),ftd(nums,1,n-1));

    }

int main(){
    vector<int> a={87, 92, 13, 22, 72, 63, 91, 44, 59, 2, 59, 73, 17, 76, 27, 61, 1, 14, 76, 87, 96, 23, 18, 72, 15, 76, 42, 83, 41, 87, 43, 61, 23, 17, 34, 68, 32, 76, 84, 81, 5, 33, 5, 30, 92, 87, 13, 57, 26, 45, 25, 53, 11, 27, 41, 16, 33, 72, 73, 12, 60, 81, 56, 6, 85, 7, 52, 89, 0, 36, 56, 92, 47, 5, 5, 66, 35, 81, 52, 96, 7, 42, 83, 65, 90, 25, 52, 42, 38, 59, 40, 34, 28, 17, 90, 13, 76, 29, 86, 35};
    z=0;
    x=0;
    cout<<rob(a)<<endl;
    cout<<z<<endl;
    cout<<x;


 return 0;
}