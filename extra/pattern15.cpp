#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int a=1;
        for(int k=1; k<=i; k++){
            
                cout<<i<<" ";
                
            
            }

cout<<endl;
        }
        
 return 0;
}