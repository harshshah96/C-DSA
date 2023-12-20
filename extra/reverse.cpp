#include<iostream>
using namespace std;

int main(){
int a;
cout<<"Enter Number:";
cin>>a;

int n; // last digit
int i=0; // Itteration constant
int rev=0; // reverse variable
int b=a; // preserve the actual number

for (; a>0; i++){
    n=a%10;
    a=a/10;
    rev=(rev*10)+n;

}
cout<<"reverse of number "<<b<<" is "<<rev<<endl;

 return 0;
}