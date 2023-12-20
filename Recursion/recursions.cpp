#include<bits/stdc++.h>
using namespace std;

void abc(int n){
    if(n==0) return;

    cout<<"PRE "<<n<<endl;
    abc(n-1);

    cout<<"IN "<<n<<endl;
    abc(n-1);

    cout<<"POST "<<n<<endl;

}

int main()
{

abc(4);

 return 0;
}