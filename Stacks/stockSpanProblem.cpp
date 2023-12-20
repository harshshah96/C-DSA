#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={100, 80, 60, 100 , 70, 60, 100, 75, 85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack <int> st;

    // stack stores the index and not the value
    // if arr[st.top()] is less than arr[i] stack will pop that index;
    // when required condition hits, difference of cuurrent index and st.top() will be stored in corresponding ans.

    ans[0]=1;
    st.push(0);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n; i++){
        
        while( st.size()!=0 && arr[st.top()]<arr[i] )  st.pop(); 

        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        ans[i]=i-ans[i];
        st.push(i);
    }

    for(int i=0;i<n; i++){
        cout<<ans[i]<<" ";
    }

 return 0;
}