#include<bits/stdc++.h>
using namespace std;

    vector<list<int>> graph;
    int v;
    void add_edge(int a, int b , bool bidir=true){
        graph[a].push_back(b);
        if(bidir== true) graph[b].push_back(a);

        return;

    }
// Using BFS:
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

    // Using DFS
    void topoFind(int i, vector<int> &visited, stack<int> &st){
        visited[i]=1;
        for(auto neighbour: graph[i]){
            if(!visited[neighbour]) topoFind(neighbour,visited, st);
        }

        st.push(i);


    }

    void topologicalSortDFS(){
        stack<int> st;
        vector<int> visited(v,0);

        for(int i=0; i<v; i++){
            if(visited[i]!=1){
                topoFind(i, visited, st);
            }

        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;

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
    //topologicalSortBFS();
    topologicalSortDFS();



 return 0;
}
