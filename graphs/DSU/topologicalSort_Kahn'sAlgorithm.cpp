#include<bits/stdc++.h>
using namespace std;

    vector<list<int>> graph;
    int v;
    void add_edge(int a, int b , bool bidir=true){
        graph[a].push_back(b);
        if(bidir== true) graph[b].push_back(a);

        return;

    }

    void topologicalSortBFS(){
        // Kahn's Algorithm

        vector<int> indegree(v, 0);
        for(int i=0; i<v; i++){
            for(auto neighbour : graph[i]){
                // i----> neigbour
                indegree[neighbour]++;
            }
        }

        queue<int> q;
        unordered_set<int> visited;
        for(int i=0; i<v; i++){
            if(indegree[i]==0){
                q.push(i);
                visited.insert(i);

            }
        }

        while (!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for (auto neighbour : graph[node]) {
            if (!visited.count(neighbour)) {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }


    }


int main(){
    cin>> v;
    int e;
    cin>>e;
    graph.resize(v, list<int> ());
    while(e--){
        int x,y;
        cin>>x>>y;

        add_edge(x,y,false);

    }
    topologicalSortBFS();



 return 0;
}