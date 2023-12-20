/* 
    Input:5
    Output:
    A B C D E
    A B C D E
    A B C D E
    A B C D E
    A B C D E
*/

#include<iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter number of rows:";
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=65; j<n+65;j++){
        cout<<char(j)<<" ";
    }
    cout<<endl;
}


 return 0;
}