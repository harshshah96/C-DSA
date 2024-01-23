#include<bits/stdc++.h>
using namespace std;
  static int io_opt = []() {
  ios::sync_with_stdio(false);
  return 0;
}();

    int find(int a,vector<int> &parent){
        if(parent[a]==a) return a;
        return parent[a]=find(parent [a], parent);
    }

    void UNION(vector<int> &parent, vector<pair<int, int>> &minMax, vector<int> &size,int a, int b){
        a=find(a, parent);
        b=find(b, parent);
        if(a!=b){
            if(size[a]>=size[b]){
                parent[b]=a;
                size[a]+=size[b];
                minMax[a].first=min(minMax[a].first, minMax[b].first);
                minMax[a].second=max(minMax[a].second, minMax[b].second);

            }else{
                parent [a]=b;
                size[b]+=size[a];
                minMax[b].first=min(minMax[a].first, minMax[b].first);
                minMax[b].second=max(minMax[a].second, minMax[b].second);
            }
        }


    }

    void get (int a,vector<int> &parent, vector<pair<int, int>> &minMax, vector<int> &size){
        a=find(a, parent);
        cout<<minMax[a].first<<" "<<minMax[a].second<<" "<<size[a]<<endl;
        
    }




int main()
{
  
    int n;
    cin>>n;
    int queries;
    cin>> queries;

    vector<int> parent(n+1);
    vector<pair<int, int> > minMax(n+1);
    vector<int> size(n+1,1);
    for(int i=0; i<=n; i++){
        parent[i]=minMax[i].first=minMax[i].second=i;
    
    }

    for(int i=0; i<queries; i++){
        string s;
        cin>>s;
        int a,b;
        
        if(s=="union"){
            cin>>a;
            cin>>b;
            UNION(parent, minMax, size, a,b);
        }else{
            cin>>a;
            
            get(a,parent, minMax, size);
            
        }
        
    }




 return 0;
}