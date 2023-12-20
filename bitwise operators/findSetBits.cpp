#include<bits/stdc++.h>
using namespace std;

int find_Set_Bits(int n){
    int count=0;
    while(n>0){
        count ++;
        n = n & (n-1);
    }
    return count;
}

int main()
{
    cout<<find_Set_Bits(22);



 return 0;
}