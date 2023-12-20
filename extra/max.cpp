#include <iostream>
using namespace std;


int main(){
   int n;
   cout<<"Enter total numbers.";
   cin>>n;


   float A[n];
   float max=0;
   cout<<"Enter numbers.(press enter) "<<endl;

   for(int i=0; i<n;i++){

    cin>>A[i];

    }


   for(int i=0; i<n;i++){

    if(A[i]>max){
        max=A[i];

    }

   }
   cout<<max;

}