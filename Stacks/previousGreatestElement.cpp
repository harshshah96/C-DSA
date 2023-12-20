#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Using a stack: 
    // POP ANS PUSH
    // Traverse forward
    // T.C= O(n)
    // S.C.= O(n);

    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    int pge[n];
    stack <int> st;
    pge[0]=-1;
    st.push(arr[0]);

    for(int i=1; i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        pge[i]= st.size()==0 ? (-1) : st.top();
        st.push(arr[i]); 
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<pge[i]<<" ";
        
    }
    
 return 0;
}