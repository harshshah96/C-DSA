#include<bits/stdc++.h>
using namespace std;

class Disjoint{
    // Disjoint Set Union

    vector<int> parent;
    vector<int> rank;
    int n;

public:

    Disjoint(int n){
        parent.resize(n);
        rank.resize(n,0);
        this->n=n;
        makeSet();
    }

    void makeSet(){
        for(int i=0; i<n; i++){
            parent[i]=i;      
        }
    }

    int find(int i){
        if(parent[i]==i) return i;
        return parent[i]=find(parent[i]);
    }

    void union_set(int a, int b){

        a = find(a);
        b = find(b);
        if(a!=b){
            if(rank[a]<rank[b]) parent[a]=b;
            else if(rank[a]>rank[b])parent[b]=a;
            else{
                parent[b]=a;
                rank[a]++;
            } 
        }
        return;
    }


};

