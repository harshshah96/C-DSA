/* 
    Input:5
    Output:
        *       
        *       
  *  *  *  *  * 
        *       
        *  
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter an Odd Number:";
    cin>>n;

    for(;n%2==0;){
        cout<<"You have entered an even number.\nplease Enter an odd Number:";
        cin>>n;
        }
    
    
    for(int i=1;i<=n;i++){

        for(int j=1; j<=n;j++){
            if(i==(n/2)+1 || j==(n/2)+1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
            

        }
        cout<<endl;


    }



 return 0;
}