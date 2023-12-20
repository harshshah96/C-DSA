#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src, int dest, bool bi_dir= true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);

}
void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if(!visited.count(neighbor)){
            dfs(neighbor, visited);
        }
        
    }
}

int connected_components(){
    int result=0;
    unordered_set<int> visited;
    for(int i=0; i<v; i++){
        // go to every vertex\
        // if from a vertex we can initiate a dfs, we ot one more connected components
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
}
int main() {
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    cout<<connected_components();



 return 0;
}
7
8
0 1
0 3
1 3
3 4
1 4
2 5
5 6
6 2