#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int mst_prims(int n,vector<vector<pair<int,int>>> &adj,vector<int> &parent){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> visited(n+1,0);
    vector<int> key(n+1,__INT_MAX__); //sets weight of every node to max int while is usually 2,147,483,647 

    key[1]=0;
    pq.push({0,1});
    int sum=0;

    //prims main loop

    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();

        int wt = it.first;
        int node = it.second;
        
        if(visited[node]==1) continue;

        visited[node] = 1;
        sum+= wt;
        //iterator for looping adjacent nodes of main node
        for(auto it : adj[node]){
            int adjnode = it.first;
            int ewt = it.second;
            
            // condition one :  checks if adjacent node is visited or not
            //second condition :  check if wight of adjacent node is less or more then current weight
            if(!visited[adjnode] && ewt<key[adjnode]){
                key[adjnode] = ewt; // less update new wight
                pq.push({ewt,adjnode});// and push to min heap
                parent[adjnode]=node; //also update parent
            }
        }
    }

    return sum;
}

int main(){
    int n;
    cout<<"enter no of nodes:  ";
    cin>>n;
    int e;
    cout<<"enter no of edges: ";
    cin>>e;

    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0;i<e;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }  

    vector<int> parent(n+1,-1);
    int sum= mst_prims(n,adj,parent);
    
    cout << "[";
    for(int i = 2; i <= n; i++) { // starting from two as node one has no parent
        if(parent[i] != -1)
            cout << "(" << parent[i] << "," << i << ") ";
    }
    cout << "]" << endl;
    cout<<"total sum is: "<<sum;
}