#include<iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter the Size of Array : ";
cin>>n;

int arr[n];
int sum=0;

//Inputs
cout<<"Enter the elements of Array:";

for(int i=0; i<n; i++){
    cin>>arr[i];
    // sum+=arr[i];

}
int x;
cout<<endl<<"Enter the number of Search : ";
cin>>x;

for(int i=0; i<n; i++){
    if(arr[i]==x){
        cout<<"Search is successfull.";
        return 0;
    }
}

cout<<"Search is unsuccessful";



 return 0;
}