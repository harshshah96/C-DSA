#include<iostream>
using namespace std;


int main()
{
int a;
    cout<<"Enter Number:";
    cin>>a;
    int n, count=0;
    int i=0;
    int b=a;
    for (; a>0; i++){
        n=a%10;
        a=a/10;
        count+=n;
    }
    cout<<"Sum of digits of number "<<a<<" is "<<count<<endl;
    /* if(b==0) cout<<1;
    else cout<<i;
 */

 return 0;
}