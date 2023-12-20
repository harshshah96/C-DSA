// MATRIX MULTIIPLICATIONS

#include<iostream>
#include<vector>
using namespace std;

void  Multiplication (vector<vector<int>> &v, vector<vector<int>> &v1){
    vector<vector<int>> multiply;
    int r1=v.size();
    int c1=v[0].size();
    int r2=v1.size();
    int c2=v1[0].size();
    

    for(int i=0; i<r1; i++ ){
        for(int j=0; j<c2; j++){
            
        }
    }
}


int main()
{
    vector<vector<int>> v;
    vector<vector<int>> v1;
    int r1,c1,r2,c2;

    cout<<"Enter rows and columns of matrix 1: ";
    cin>>r1>>c1;

    cout<<"Enter rows and columns of matrix 1: ";
    cin>>r2>>c2;

    if(c1==r2){

        cout<<"Enter elements in first matrix: ";

        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                int q;
                cin>>q;
                v[i].push_back(q);

            }
        }
        cout<<"Enter elements in Second matrix: ";
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                int q;
                cin>>q;
                v1[i].push_back(q);

            }
        }

    //multiplication(v,v1);


        
    }else{ // c1!=r2
        cout<<"Matrix multiplication is not possible.";

    }

 return 0;
}