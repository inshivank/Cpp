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

    list<int> list1={5,4,3,1};
    display(list1);
    
    //sorting
    list1.sort();
    display(list1);
}


