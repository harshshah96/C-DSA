/* 
Input:7
Output:
 *                 *
    *           *
       *     *
          *
       *     *
    *           *
 *                 * 
 
 */


#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter an Odd Number:";
    cin>>n;

    while(n%2==0){
        cout<<"You have entered an even number.\nplease Enter an odd Number:";
        cin>>n;
        }
    
    
    for(int i=1;i<=n;i++){

        for(int j=1; j<=n;j++){
            if(i==j || i+j==n+1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
            

        }
        cout<<endl;


    }
}