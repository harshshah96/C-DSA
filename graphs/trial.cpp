#include<bits/stdc++.h>
using namespace std;

string largestGoodInteger(string num) {
        int n=num.length();
        int count=0;
        int mx=-1;
        for(int i=1; i<n-2; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){ 
                mx=max(mx,stoi(num.substr(i,3)));
                }
        }
        if(mx==INT_MIN) return "";
        return to_string(mx);
        
}

int main()
{
    string cor="6777133339";

    cout<<largestGoodInteger(cor)<<endl;
    // int n=cor.length();
    //     string s="";
    
    // int i=0;
    //     while(i<n){
    //         int sCount=0;
    //         if(cor[i]=='S'){
    //             while(sCount<2){
    //                 if(i>=n) break;
    //                 if(cor[i]=='S') sCount++;
    //                 i++;
    //             }
    //             s+='S';
    //         }else {
    //             s+=cor[i];
    //             i++;
    //         }
    //     }
    //     cout<<s<<endl;
        
 return 0;
}
