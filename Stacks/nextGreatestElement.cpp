#include<bits/stdc++.h>
using namespace std;


int main()
{

    // Using a stack: 
    // POP ANS PUSH
    // Traverse reverse
    // T.C= O(n)
    // S.C.= O(n);

    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int nge[n];
    nge[n-1]=-1;
    stack <int> st;
    st.push(arr[n-1]);

    for(int i=n-2; i>=0; i--){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        nge[i]= st.size()==0 ? (-1) : st.top();
        st.push(arr[i]); 
    }

    for(int i=0; i<n; i++){
        cout<<nge[i]<<" ";
        
    }

 return 0;

}