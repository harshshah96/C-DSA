// Question:
//Given a grid of nxm size. Each cell of the grid are marked as 'L', 'R', 'D', 'U'.Character on each cell denotes if you are standing at that cell, what direction you can move to.
// check if we start from [0,0], can we reach to (n-1,m-1) cell ?
// Space complexity of solutoion must be constant


// Solution:

// for constant space complexiety [O(1)] we neither can use recursive, DFS nor BFS.
// so we use slow-fast algorithm to detect cycle and hence our output.


// Question:
//Given a grid of nxm size. Each cell of the grid are marked as 'L', 'R', 'D', 'U'.Character on each cell denotes if you are standing at that cell, what direction you can move to.
// check if we start from [0,0], can we reach to (n-1,m-1) cell ?
// Space complexity of solutoion must be constant


// Solution:

// for constant space complexiety [O(1)] we neither can use recursive, DFS nor BFS.
// so we use slow-fast algorithm to detect cycle and hence our output.


#include<bits/stdc++.h>
using namespace std;



bool f(vector<vector<char>> &matrix){
    int i,j=0; //  slow 
    int k,l=0;  // fast


    while(1){
        char ch=matrix[i][j];
        char dh= matrix[k][l];

        if(ch=='U') i=i-1;
        else if(ch=='D')i=i+1;
        else if(ch=='R')j=j+1;
        else j=j-1;
         
        if(!(i>=0 && j>=0 &&  i<matrix.size() && j<matrix[0].size())) return false;
        if(i==matrix.size()-1 && j==matrix[0].size()-1) return true;
        if(k==i && l==j) return false;

        //------
        if(dh=='U')k=k-1;
        else if(dh=='D')k=k+1;
        else if(dh=='R')l=l+1;
        else l=l-1;

        if(!(k>=0 && l>=0  && k<matrix.size() && l<matrix[0].size())) return false;
        if(k==matrix.size()-1 && l==matrix[0].size()-1) return true;
        if(k==i && l==j) return false;

        //---------
        dh= matrix[k][l];

        if(dh=='U')k=k-1;
        else if(dh=='D')k=k+1;
        else if(dh=='R')l=l+1;
        else l=l-1;

        if(!(k>=0 && l>=0  && k<matrix.size() && l<matrix[0].size())) return false;
        if(k==matrix.size()-1 && l==matrix[0].size()-1) return true;
        if(k==i && l==j) return false;

        
    }
    return false;
}


int main()
{
    vector<vector<char>> matrix = {{'R','R','D','R'},{'D','L','D','L'},{'U','D','L','D'},{'U','R','R','R'}};

    bool flag =f(matrix);

    cout<<flag;





 return 0;
}
