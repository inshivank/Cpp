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
    
    
    vector<int>::iterator iter;
    iter=vec.begin(); 
    vec.insert(iter+1,4,8); //inserts four copies of 8 at position two

    display(vec);

    return 0;
}