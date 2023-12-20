#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector <int> nums;
    int c;
    cin>>c;
    int a;
    cin>>a;
    for(int i=0; i<c; i++){
        nums.push_back(i);
    }

    int n=nums.size();
int count=0;

    for(int i=0;i<n; i++){
        if(nums[i]==a) {
            cout<< "True "<<count<<endl;
            return 0;
           
        }
        cout<<i<<") "<<'a'<<endl;
        count++;
    }

    cout<<"False "<< count<< endl;



 return 0;
}