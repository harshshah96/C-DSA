#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v(7,0);

    for(int i=1; i<=7; i++){
        int j=i;
        while(j<=7){
            v[j]= v[j] == 1 ? 0 : 1 ;
            j+=i;
        }
    }

    for(int i=1; i<=7; i++){
        if(v[i] == 1) cout<<i<<endl;
    }

 return 0;
}