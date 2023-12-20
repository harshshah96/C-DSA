
//  leetcode 1034 -> Coloring the border

#include<bits/stdc++.h>
using namespace std;


    bool nonBoundary(vector<vector<int>>& grid, int r, int c, int newColor){
        int m=grid.size();
        int n= grid[0].size();
        if(r==0 || c==0 || r == m-1|| c==n-1 || grid[r+1][c]!=-newColor ||  grid[r-1][c]!=-newColor ||  grid[r][c+1]!=-newColor ||  grid[r][c-1]!=-newColor) return false;
        return true;

    }
    vector<pair<int,int>> interval;
    void dfs(vector<vector<int>>& grid, int r, int c, int newColor, int oriColor){
        int m=grid.size();
        int n= grid[0].size();
        if(r<0 || c<0 || r>=m || c>=n || grid[r][c]!=oriColor) return;
        if(grid[r][c] == oriColor){
            grid[r][c]=-newColor;
            dfs(grid,r+1,c,newColor,oriColor);
            dfs(grid,r-1,c,newColor,oriColor);
            dfs(grid,r,c+1,newColor,oriColor);
            dfs(grid,r,c-1,newColor,oriColor);

            // for boundary elements
            if(nonBoundary(grid,r,c,newColor)){
                interval.push_back({r,c});
            }

        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int oriColor= grid[row][col];
        if(oriColor==color) return grid;
        // interval.clear();
        dfs(grid, row, col, color, oriColor);
        
        for(auto p: interval){
            int i=p.first;
            int j=p.second;
            grid[i][j]=oriColor;
        }
        for(int i=0; i<grid.size();i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]<0)
                grid[i][j]*=(-1);
            }
        }
        return grid;
    }


int main()
{
    //testcase 3
    vector <vector<int>> grid {{1,1,1},{1,1,1},{1,1,1}};
    int row = 1, col = 1, color = 2;
    vector <vector<int>> ans= colorBorder (grid,row,col,color);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }



 return 0;
}