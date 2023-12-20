#include<bits/stdc++.h>
using namespace std;

void stringSubset(string ans, string original , vector<string> &v, bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){       
        if(flag==true) stringSubset( ans+ch,  original.substr(1) , v, true);
        stringSubset( ans,  original.substr(1) , v, true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true) stringSubset( ans+ch,  original.substr(1) , v, true);
        stringSubset( ans,  original.substr(1) , v, false);
    }else{
        if(flag==true)stringSubset( ans+ch,  original.substr(1) , v, true);
        stringSubset( ans,  original.substr(1) , v, true);
    }
}

int main()
{
    string str="aaa";
    vector <string> v;
    stringSubset("",str,v,true);
    for(int i=0; i<v.size();i++){
        cout<<i+1<<". "<<v[i]<<endl;
    }

 return 0;
}