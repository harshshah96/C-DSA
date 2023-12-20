#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    int n=s.length();
    if(n%2==1) return false;
    stack <char> st;
    for(int i=0; i<s.length();i++){
        if(s[i]=='(') st.push('(');
        else {
            if(st.size()>0) st.pop();
            else return false;
        }
    }
    if (st.size()==0) return true;
    else return false;
}

int main()
{
    string s="((())";
    cout<<isBalanced(s);

 return 0;
}