#include<bits/stdc++.h>
using namespace std;

void Max_powerOfTwo(int &n){
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=(n+1)/2;

}

int toggleBits(int n){
    int m=n;

    //Find max power of 2 just less then or equal to n
    Max_powerOfTwo(m);

    //Find power of 2 just greater than n and subtract 1
    m=(m*2 )-1;

    // EXOR the result of m with the number to toggle
    n=n^m;\
    return n;    
}

int main()
{

cout<<toggleBits(22);


 return 0;
}