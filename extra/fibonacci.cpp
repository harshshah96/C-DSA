/* 
    Print first ‘n’ fibonacci numbers.
    Sample Input : 10
    Output :

    1 1 2 3 5 8 13 21 34 55 
*/


#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    int  sum;

    int a=0,b=1;
    for(int i=0;i<n;i++){
        sum=a+b;
        b=a;
        a=sum;
        cout<<sum<<endl;

    }


    return 0;
}