#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> adj_nodes;
    adj_nodes.push_back({3,4});
    adj_nodes.push_back({5,4});
    adj_nodes.push_back({1,4});
    adj_nodes.push_back({8,4});

    for(int i=0;i<adj_nodes.size();i++){
        cout<<adj_nodes[i].first<<endl;
      }
      cout<<endl;
      cout<<endl;
}
