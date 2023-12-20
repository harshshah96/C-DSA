/*  
    Pattern: NUMBER BRIDGE

    Input:4
    Output:
        12345
        12 45
        1   5
        
*/


#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"Enter No. of Rows:";
cin>>m;
int n=m-1;


for(int i=1; i<=2*m-1 ; i++){
    cout<<i;
}

cout<<endl;

for(int i=1; i<=n; i++){
    int s=1;
    //stars
    for(int j=1; j<=n-i+1; j++){
        cout<<s;
        s++;
    }
    //spaces
    for(int k=1; k<=2*i-1 ; k++){
        cout<<" ";
        s++;
    }
    //stars
     for(int l=1; l<=n-i+1; l++){
        cout<<s;
        s++;
    }

    cout<<endl;
} 
}
