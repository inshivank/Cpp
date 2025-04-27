#include <iostream>
#include<list>  //
using namespace std;



void display(list<int> &v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

//way to display
// void display(list<int> &v) {
//     list<int>::iterator it;
//     for (it = v.begin(); it != v.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;
// }


int main() {

    //similar to vector
    list<int> list1={5,4,3,1};
    

    //another way to create
    // list<int> list1;
    // list1.push_back(5);
    // list1.push_back(4);
    // list1.push_back(3);
    // list1.push_back(1);
    
    //way to display
    // list<int>::iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    display(list1);
    
    return 0;
}


