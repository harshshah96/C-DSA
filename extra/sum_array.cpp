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
    sum+=arr[i];

}
cout<<endl<<"Sum of elements of array is "<<sum;



 return 0;
}