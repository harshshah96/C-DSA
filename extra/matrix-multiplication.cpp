#include <iostream>
using namespace std;

int main (){

int r1,r2,c1,c2;

cout<<"enter rows and columns of matrix 1:"<<endl;
cin>>r1>>c1;
cout<<"enter rows and columns of matrix 2:"<<endl;
cin>>r2>>c2;



while(c1!=r2){

    cout<<"Invalid Inputs."<<" Enter valid inputs for matrix multiplication."<<endl;
    cout<<"(NOTE: For matrix multiplication, the rows of second matrix must be equal to columns of first matrix.)"<<endl;

    cout<<"enter rows and columns of matrix 1:"<<endl;
    cin>>r1>>c1;
    cout<<"enter rows and columns of matrix 2:"<<endl;
    cin>>r2>>c2;

}

//                                                                                  ---- Matrix declaration ----

int A[r1][c1],B[r2][c2];                                              

//                                                                                  ---- Input of elements ----
cout<<"Enter elements for matrix A.";
for(int i=0; i<r1; i++){

    for( int j=0; j<c1; j++){
        cin>>A[i][j];
    }
}
cout<<"\nEnter elements for matrix B.";
for(int i=0; i<r2; i++){

    for( int j=0; j<c2; j++){
        cin>>B[i][j];
    }
}

//                                                                                    ---- Display of matrices ----

cout<<"Matrix A="<<endl;
for(int i=0; i<r1; i++){

    for( int j=0; j<c1; j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"\n";

cout<<"Matrix B="<<endl;
for(int i=0; i<r2; i++){

    for( int j=0; j<c2; j++){
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
}
//                                                                                    ---- Declaring Output Matrix ----
int C[r1][c2];

//                                                                                    ---- Multiplication of matrix ----
int mul[r1][c2];
for(int i=0; i<r1; ++i){
    for(int j=0; j<c2; ++j){
        mul[i][j]=0;
            for(int k=0;k<c1;++k){

                mul[i][j] += A[i][k]*B[k][j];
            
            }
    }
}
//                                                                                      ---- Display of Output Matrix ----
cout<<"\nMatrix C="<<endl;
    for(int i=0; i<r1; i++){

        for( int j=0; j<c2; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
}