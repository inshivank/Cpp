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

    //use pop_back to delete from last
    // list1.pop_back();
    // display(list1);
    
    //from front
    // list1.pop_front();
    // display(list1);
    
    //from middle
    // list1.remove(3); 
    // display(list1);
    // return 0;
}


