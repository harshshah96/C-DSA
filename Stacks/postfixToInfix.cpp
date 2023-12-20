#include<bits/stdc++.h>
using namespace std;

// int solve(int val1, int val2, char ch){
//    // infix : val1 op val2
//     if(ch=='+') return (val1+val2);
//     else if(ch=='-') return (val1-val2);
//     else if(ch=='/') return (val1/val2);
//     else if(ch=='*') return (val1*val2);
// }
string solve(string val1, string val2, char ch){
    // prefix conversion: op val1 val2
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}


int main()
{
    string s="79+4*8/3-";
    stack<string> val;
    stack<char> op;

    for(int i=0; i<s.length();i++){

        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));

        }else {
            string val2 =val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans= solve(val1,val2,s[i]);
            val.push(ans);


        }
    }
    
    cout<<val.top()<<endl;
    


 return 0;
}