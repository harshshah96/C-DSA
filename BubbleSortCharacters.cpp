#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;


int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    vector <char> s;

// String Filteration
    cout<<endl;
    cout<<"Enter a char: ";
    char A;
    cin>>A;

    for(int i=0; i<str.length(); i++){
            if( A < str[i]) s.push_back(str[i]);   
        
    }

    cout<<endl;
    int n=s.size();

// Bubble Sort

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){

            if(s[j]>s[j+1]){
                swap(s[j], s[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }

    for(int i=0; i<n ; i++){
        cout<<s[i]<<"";
    }
    cout<<endl;

    return 0;
 }