#include<bits/stdc++.h>
using namespace std;


int main()
{
        vector <int> nums;
        cout<<"Enter size of array.";
        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            int q;
            cin>>q;
            nums.push_back(q);
        }

        sort(nums.begin(),nums.end());
        int target;
        cout<<"Enter the target value: "<<endl;
        cin>>target;

        int low=0;
        int high=n-1;
        int mid;
        bool flag=false;

        while(high>=low){
            mid= low + (high-low)/2;
            if(nums[mid]==target) {
                cout<<nums[mid-1];
                flag=true;
                break;}
            else if(nums[mid]<target) {
                low=mid+1;
                }
            else  {
                high=mid-1;
            }
        }

        if(flag==false) cout<<nums[high];



 return 0;
}