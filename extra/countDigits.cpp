#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number:-";
    cin>>a;
    int i=0;
    int b=a;
    for (; a>0; i++){
        a=a/10;
    }
    if(b==0) cout<<1;
    else cout<<i;

 return 0;
}