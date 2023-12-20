#include<bits/stdc++.h>
using namespace std;

void sum(int sum1,int n){
    if(n==0) {
        cout<<sum1<<endl;
        return;
    }
    sum(sum1+n,n-1);

}

int main()
{

sum(0,5);

 return 0;
}