#include<bits/stdc++.h>
using namespace std;

float pow(float a, float n){

    if(n==0) return 1;
    if(n==1) return a;

    float ans;
    ans=pow(a,n/2.0);

    //if(n%2==0) 
    return ans*ans;
    // else return a*ans*ans;

}
int main()
{
    
    cout<<pow(2.5,2)<<endl;;

 return 0;
}