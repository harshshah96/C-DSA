#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    int n=s.size();
    vector <int> arr(26,0);

    for(int i=0; i<n; i++){

        char ch= s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0; i<26; i++){
        if(max<arr[i])max=arr[i];
    }

    // cout<<max;

    for(int i=0; i<26; i++){
        if(arr[i]==max){
            cout<<(char)(i+97)<<" "<<max<<endl;
        }

    }



 return 0;
}