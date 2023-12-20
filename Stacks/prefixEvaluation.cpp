#include<bits/stdc++.h>
using namespace std;

int solve(int val1, int val2, char ch){
   // infix : val1 op val2
    if(ch=='+') return (val1+val2);
    else if(ch=='-') return (val1-val2);
    else if(ch=='/') return (val1/val2);
    else if(ch=='*') return (val1*val2);
}
// string solve(string val1, string val2, char ch){
//     // prefix conversion: op val1 val2
//     string s="";
//     s.push_back(ch);
//     s+=val1;
//     s+=val2;
//     return s;
// }
// int prio(char ch){
//     if(ch=='+' || ch=='-') return 1;
//     else return 2;
// }


int main()
{
    string s="-/*+79483";
    stack<int> val;
    stack<char> op;
    int n=s.length();

    for(int i=n-1; i>=0;i--){

        if(s[i]>=48 && s[i]<=57){
            val.push((s[i]-48));

        }else {
            int val1 =val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans= solve(val1,val2,s[i]);
            val.push(ans);


        }
    }
    
    cout<<val.top()<<endl;
    


 return 0;
}