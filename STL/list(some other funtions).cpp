#include <iostream>
#include<list>  //
using namespace std;



void display(list<int> &v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}


int main() {

    list<int> list1={5,7,3,1};
    display(list1);
    
    // to reverse a list
    list1.reverse();
    display(list1);
    return 0;
}


