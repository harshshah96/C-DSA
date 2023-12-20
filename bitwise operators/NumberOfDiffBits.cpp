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
    int x=3;
    int y=2;
    cout<<"Number of Different Bits in "<<x<<" and "<<y<<" are "<<find_Set_Bits(x^y)<<endl;




 return 0;
}