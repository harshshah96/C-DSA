#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    int count=0;
    int n=s.size();

    for(int i=0; i<n; i++){
        if(n==1){
            count=0;
            break;
        }
        if(i==0 && s[i]!=s[i+1]) count++ ;
        else if(i==(n-1) && s[i]!=s[i-1]) count++ ;
        else if(s[i]!=s[i-1] && s[i]!=s[i+1]) count++ ;

        
    }
    cout<<count<<endl;


 return 0;
}