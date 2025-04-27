
#include <iostream>
#include<vector> //ye jaruri hai
using namespace std;

void display(vector<int> &v){
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
        //or you can use cout<<v.at(i)<<" ";
      }}
int main() {
    // declaration of vector
    vector<int> vec;
    int element,size;
    
    cout<<"enter size of vector: ";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enter a number: ";
        cin>>element;
        //push_back inserts element at the end
        vec.push_back(element); 
    }



    // display(vec);

    // another way to display
    
    // list<int>::iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

   //another way
  //  for (int x : vec) {
  //   cout << x << " ";
  //  }
  //  cout<<endl;
    return 0;
}