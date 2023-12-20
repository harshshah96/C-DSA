/*  Pattern: STAR BRIDGE

    Input:4
    Output:
        *******
        *** ***
        **   **
        *     *
*/

#include<iostream>
using namespace std;


int main(){
int m;
cout<<"Enter No. of Rows:";
cin>>m;
int n=m-1;

for(int i=1; i<=2*m-1 ; i++){
    cout<<"*";
}

cout<<endl;

for(int i=1; i<=n; i++){
    //stars
    for(int j=1; j<=n-i+1; j++){
        cout<<"*";
    }
    //spaces
    for(int k=1; k<=2*i-1 ; k++){
        cout<<" ";
    }
    //stars
     for(int l=1; l<=n-i+1; l++){
        cout<<"*";
    }

    cout<<endl;
}

 return 0;
}