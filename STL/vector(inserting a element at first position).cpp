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
    
    //declaration of iterator iter
    vector<int>::iterator iter;
    //intialization of iter
    // works similar to of pointer
    iter=vec.begin(); //iter pointing at the begining of vector
    vec.insert(iter,8);
    //if you want to insert at second  position just write vec.insert(iter+1,8);

    display(vec);

    return 0;
}