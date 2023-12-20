#include<bits/stdc++.h>
using namespace std;

void display(queue <int> &q){
    int n=q.size();
    for(int i=0; i<n;i++){
        int x=q.front();
        q.pop();
        q.push(x);
        cout<<x<<" ";
    }
    cout<<endl;
}
void reverseK(queue <int> &q, int k){
    stack <int> st;
    int n=q.size();
    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0; i<n-k;i++){
        q.push(q.front());
        q.pop();

    }
}


int main()
{
    int k=5;
    queue <int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverseK(q,k);
    display(q);




 return 0;
}