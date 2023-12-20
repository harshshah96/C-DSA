/*
    Finding all the permutations of a string given 
    all elements of the string  are unique.
 */

#include<bits/stdc++.h>
using namespace std;
void Permutations (string ans, string original){
    if(original==""){
            cout<<ans<<endl;
            return;
        }
    for(int i=0; i<original.length(); i++){
        char ch= original[i];
        string left =original.substr(0,i);
        string right =original.substr(i+1);
        Permutations(ans+ch, left + right);
    }
}


int main()
{
    string str="123––";
    Permutations("",str);
 return 0;
}