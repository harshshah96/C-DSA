#include<iostream>
#include<vector>
using namespace std;

void generateMatrix(int n) {
        vector<vector<int>> v;
        int count=0;

        int rowmin=0;
        int rowmax=n-1;
        int colmin=0;
        int colmax=n-1;

        while(rowmin<=rowmax && colmin<=colmax){
        
        //Right
        for(int i=colmin ; i<=colmax; i++){
           v[i].push_back(++count);
        }
        rowmin++;
        if(rowmin>rowmax || colmin>colmax) break;

        //down
        for(int i=rowmin; i<=rowmax; i++){
            v[i].push_back(++count);
        }
        colmax--;
        if(rowmin>rowmax || colmin>colmax) break;


        //left
        for(int i=colmax; i>=colmin; i--){
            v[i].push_back(++count);
        }
        rowmax--;
        if(rowmin>rowmax || colmin>colmax) break;


        //Up
        for(int i=rowmax; i>=rowmin; i--){
            v[i].push_back(++count);
        }
        colmin++;
        //if(rowmin>rowmax && colmin>colmax) break;


    }
    for(int i=0;i<n; i++){
        for(int j=0; i<n; i++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return ;
        
    }

    int main(){
    
    generateMatrix(10);

    }