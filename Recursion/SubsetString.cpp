#include<bits/stdc++.h>
using namespace std;

void stringSubset(string ans, string original , vector<string> &v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    stringSubset( ans+ch,  original.substr(1) , v);
    stringSubset( ans,  original.substr(1) , v);
}


int main()
{
    string str="abcd";
    vector <string> v;
    stringSubset("",str,v);
    for(int i=0; i<v.size();i++){
        cout<<i+1<<". "<<v[i]<<endl;
    }




 return 0;
}