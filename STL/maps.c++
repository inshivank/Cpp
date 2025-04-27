#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> marks={
        {"shivank",99},
        {"harhsit",59},
        {"ankesh",36},
        {"rohan",78}
    };
    // map<string,int>::iterator iter;
    for ( auto iter = marks.begin(); iter!=marks.end(); iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
     cout<<marks.size()<<endl;
}