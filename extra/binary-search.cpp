#include <iostream>
using namespace std;


int main(){
   
   //int A[5]={1,2,3,4,5};


   
   //                                                                   ---- Input of numbers ----
   int n;
   cout<<"Enter total numbers.";
   cin>>n;
   int A[n];
   //int max=0;2
   
   { 
     cout<<"Enter numbers.(press enter) "<<endl;

        for(int i=0; i<n;i++){
             cin>>A[i];
             }
   }
   
    //                                                                    ---- Binary Search ----
    int l=0, h=n-1,s;
    int mid;
    cout<<"Enter the search."<<endl;
    cin>>s;

    while(l<=h){
        mid=(l+h)/2;
        if(s==A[mid]){
            cout<<"Search is successful.\nWe have found number at "<<mid<<". "<<endl;
            return 0;

        }else if(s!=A[mid]){
                if(s>A[mid]){
                    l=mid+1;
                }else if(s<A[mid]){
                    h=mid-1;
                }
        }
    }
    cout<<"Search is UNSUCCESSFUL";
    return 0;

}


