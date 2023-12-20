#include<iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter No. of rows:";
cin>>n;


for(int i=1; i<=(2*n-1) ;i++){
int a=i-n;
     if(i<=n){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }for(int k=1;k<=(2*i-1); k++){
            cout<<"*";
        }

     }else{
        for(int l=1;l<=i-n; l++){
            cout<<" ";
        }
        for(int p=1; p<=(2*n-i)*2-1; p++){
            cout<<"*";
        }
     }
     cout<<endl;
}

 return 0;
}