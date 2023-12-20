#include<bits/stdc++.h>
using namespace std;

int Max_powerOfTwo(int n){
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;

    n=(n+1)/2;
    return n;

}


int main()
{
// //Method 1:
//     //Max power of 2 before the number x
//     int x=5000;
//     int temp;
//     while(x!=0){
//         temp=x;
//         x&=(x-1); // BRIAN KERNIGHAN ALGORITHM
//     }
//     cout<<temp<<endl;
//     //for Max power of two just after the number
//     cout<<(2*temp)<<endl;

//Method 2:

cout<<Max_powerOfTwo(64);

 return 0;
}