#include<bits/stdc++.h>
using namespace std;
int solve(int val1, int val2, char ch){
    if(ch=='+') return (val1+val2);
    else if(ch=='-') return (val1-val2);
    else if(ch=='/') return (val1/val2);
    else return (val1*val2);
}
int prio(char ch){
    if(ch=='/' || ch=='*') return 2;
    else return 1;
}


int main()
{
    string s="7+11*4/8-13";
    stack<int> val;
    stack<char>op;

    for(int i=0; i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }else {// s[i] is * , /, +, -
            if(op.size()==0 || prio(s[i])>prio(op.top()) ){
                op.push(s[i]);
            }else{
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }

                op.push(s[i]);
            }

        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans); 
    }

    cout<<val.top()<<endl;



 return 0;
}