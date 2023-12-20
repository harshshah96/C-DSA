#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;


    vector<int> nums(n);

    cout<<"Enter Inputs :";

    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }

    int target;
    cout<<"Enter target sum:";
    cin>>target;

   for(int i=0 ; i<n; i++){
        int j=i;
      
        for(int k=0; k<n-i; k++){
        
        if(nums[i]+nums[j]==target){
            cout<<"["<<i<<","<<j<<"]"<<endl;
            
        }
        j++;
        }
    }

    return 0;
}

