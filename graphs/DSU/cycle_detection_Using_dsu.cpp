#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int i){
            if(parent[i]==i) return i;
            return parent[i]=find(parent, parent[i]);
        }

bool Union(vector<int> &parent,vector<int> &rank,int a, int b){

        a = find(parent, a);
        b = find(parent, b);
        if(a==b) return true;
        if(a!=b){
            if(rank[a]<rank[b]) parent[a]=b;
            else if(rank[a]>rank[b])parent[b]=a;
            else{
                parent[b]=a;
                rank[a]++;
            } 
        }
        return false;
    }



int main(){
    int n;
    cin>>n;
    int queries;
    cin>>queries;

    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0; i<=n; i++){
        parent[i]=i;
    }

    while(queries--){
        int x,y;
        cin>>x>>y;
        bool b= Union(parent, rank, x,y);
        if(b==true) cout<<"cycle detected\n";

    }
    
 return 0;
}