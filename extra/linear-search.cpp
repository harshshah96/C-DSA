#include <iostream>
using namespace std;


int main(){
   
   //int A[5]={1,2,3,4,5};


   
   int n;
   cout<<"Enter total numbers.";
   cin>>n;
   int A[n];
   //int max=0;2
   //                                                                   ---- Input of numbers ----
   { 
     cout<<"Enter numbers.(press enter) "<<endl;

        for(int i=0; i<n;i++){
             cin>>A[i];
             }
   }
    //                                                                   ---- Linear search ----
   int s;                                                              
   cout<<"Enter the number for search."<<endl;
   cin>>s;

   for(int i=0; i<n; i++){

        if(s==A[i]){
            cout<<"The search is SUCCESSFULL"<<endl;
            cout<<"we have found the required number at "<<i<<"."<<endl;
            return 0;

        }
}
    cout<<"The search is UNSUCCESSFULL";
        return 0;
}
