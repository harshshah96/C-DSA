#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int i, int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    isPalindrome(str,i+1,j-1);

}


int main()
{
    string s ="racecr";
    int n=s.length();
    cout<<isPalindrome(s,0,n-1);



 return 0;
}