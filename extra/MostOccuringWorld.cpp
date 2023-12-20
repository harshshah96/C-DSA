#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    int n=s.size();
    stringstream ss(s);
    string temp;
    vector <string> v;

    while(ss>>temp){
        v.push_back(temp);
    }

    cout<<endl;
    sort(v.begin(),v.end());

    int MaxCount=1;
    int count=1;

    for(int i=0; i<v.size(); i++){
            if(v[i]==v[i-1]) count++;
            else count=1;
            MaxCount= max(MaxCount, count);
       
    }

count =1;

    for(int i=0; i<v.size(); i++){
            if(v[i]==v[i-1]) count++;
            else count=1;
            if(count==MaxCount){
                cout<<v[i]<<" "<<count<<endl;
            }
       
    }
    
 return 0;
}