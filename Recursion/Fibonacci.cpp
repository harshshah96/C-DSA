#include<bits/stdc++.h>
using namespace std;

long long fibonaci(long long n){
    if(n==1 || n==2) return 1;
    
    return fibonaci(n-1)+fibonaci(n-2);
}
int main(){

    long long b=fibonaci(7);
    cout<<b;
    return 0;
    
}