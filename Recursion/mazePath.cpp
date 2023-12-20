#include<bits/stdc++.h>
using namespace std;


// METHOD 1: USING START AND END PARAMAETERS:
    // int maze(int a, int b, int c, int d){
    //     if(a>c || b>d) return 0;
    //     if(a==c && b==d) return 1;
    //     int rightWays=maze(a,b+1,c,d);
    //     int downWays=maze(a+1,b,c,d);
    //     int totalWays = rightWays + downWays;
    //     return totalWays ;
    // }

    // void printPath(int a , int b, int c, int d, string s=""){
    //     if(a>c || b>d) return;
    //     if(a==c && b==d) {
    //         cout<<s<<endl;
    //         return ;}
    //     printPath(a,b+1,c,d,s+"R ");
    //     printPath(a+1,b,c,d,s+"L ");

    // }

// METHOD 1: USING ONLY END PARAMAETERS:
// START PARAMETERS ARE BY DEFAULT 0,0
int maze2(int a, int b){
    if(a<0 || b<0) return 0;
    if(a==0 && b==0) return 1;
    int rightWays=maze2(a,b-1);
    int downWays=maze2(a-1,b);
    int totalWays = rightWays + downWays;
    return totalWays ;
}

void printPath2(int a , int b, string s=""){
    if(a<0 || b<0) return;
    if(a==0 && b==0) {
        cout<<s<<endl;
        return ;}
    printPath2(a,b-1,s+"R ");
    printPath2(a-1,b,s+"L ");

}



int main()
{

// cout<<maze2(3,4)<<endl;
cout<<"The "<<maze2(3,4)<<" routes are as follows :"<<endl;
printPath2(3,4);

 return 0;
}