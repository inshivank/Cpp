// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
    cout<<endl;
  }
int main() {
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(1);
    display(vec);
    
    //pop_back removes last element
    vec.pop_back(); 
    display(vec);
    return 0;
}