
#include <iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
      for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
      }
    cout<<endl;
}
int main() {
    //integer vector of length zero
    vector<int> vec; 

    //integer vector of length 4
    vector<int> vec1(4); 
    
    //character vector of length 4
    vector<char> vec2(4);
    vec2.push_back('5');
    display(vec2);

    //character vector of length 4 from vec 2
    vector<char> vec3(vec2);
    display(vec3);

    //integer type vector of length four elements which area 13s
    vector<int> vec4(4,13);// 4-element vector of 13's 
    display(vec4);
    
    return 0;
}


