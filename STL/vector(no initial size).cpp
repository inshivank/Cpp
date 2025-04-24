//no need to inialize size
#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
}
int main() {
    //declaration without size
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(1);
    
    display(vec);
    return 0;
}