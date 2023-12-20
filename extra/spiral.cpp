#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    int m;
    cout<<"Enter columns: ";
    cin>>m;

    int array[n][m];

//  INPUTS TO THE ARRAY: 

    cout<<"Enter elemsnts of the array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>array[i][j];

        }
    }
// SPIRAL

    int rowmin=0;
    int rowmax=n-1;
    int colmin=0;
    int colmax=m-1;

    while(rowmin<=rowmax && colmin<=colmax){
        
        //Right
        for(int i=colmin ; i<=colmax; i++){
            cout<<array[rowmin][i]<<" ";
        }
        rowmin++;
        if(rowmin>rowmax && colmin>>colmax) break;

        //down
        for(int i=rowmin; i<=rowmax; i++){
            cout<<array[i][colmax]<<" ";
        }
        colmax--;
        if(rowmin>rowmax && colmin>>colmax) break;


        //left
        for(int i=colmax; i>=colmin; i--){
            cout<<array[rowmax][i]<<" ";
        }
        rowmax--;
        if(rowmin>rowmax && colmin>>colmax) break;


        //Up
        for(int i=rowmax; i>=rowmin; i--){
            cout<<array[i][colmin] <<" ";
        }
        colmin++;


    }

 return 0;
}