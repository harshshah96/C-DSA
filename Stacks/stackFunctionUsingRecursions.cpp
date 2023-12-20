#include<bits/stdc++.h>
using namespace std;

//display functions
    void displayReverse(stack <int> &st){
        if(st.size()==0) return;
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        displayReverse(st);
        st.push(x);
        return;
    }

    void display(stack <int> &st){
        if(st.size()==0) return;
        // cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        display(st);
        cout<<x<<" ";
        st.push(x);
        return;
    }
// Push at bottom using recursion
    void PushAtBottom(stack <int> &st, int val){
        if(st.size()==0) {
            st.push(val);
            return;
            }
        int x=st.top();
        st.pop();
        PushAtBottom(st,val);
        st.push(x);
        return;
    }
// reverse a stack
    void reverse(stack <int> &st){
        if(st.size()==1) return;
        int x=st.top();
        st.pop();
        reverse(st);
        PushAtBottom(st,x);
    }



int main()
{
    stack <int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    PushAtBottom(st,-10);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    cout<<endl;
    




 return 0;
}