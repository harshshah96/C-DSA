#include<bits/stdc++.h>
using namespace std;

float max (float a, float b){
    if(a>b) return a;
    else return b;
}

float min (float a, float b){
    if(a<b) return a;
    else return b;
}


int main()
{
    int arr[]={5,2,10};
    int n=3;

    float kmin=(int)(INT_MIN);
    float kmax=(int)(INT_MAX);
    bool flag=true;

    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){//KMIN
            kmin = max(kmin, (arr[i]+arr[i+1])/2.0);
        }else { // KMIN
            kmax = min(kmax , (arr[i]+arr[i+1])/2.0);
        }

        if(kmin<kmax){
            flag = false;
            break;
        }


    }
     
     if (flag == false){ cout<< -1;
     }else if(kmin == kmax){
        if(kmin-((int)(kmin))==0){ 
            cout<<"There is only one value of k : "<<(int)kmin<<endl;
        }
        else cout<< -1;
     }else {
                if(((int)(kmin))<kmin) kmin= int(kmin)+1;

                cout<<"Range is ["<<kmin<<","<<(int)(kmax)<<"]"<<endl;
     }


 return 0;
}