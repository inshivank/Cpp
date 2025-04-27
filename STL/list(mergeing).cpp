#include <iostream>
#include<list> 
using namespace std;

void display(list<int> &v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    list<int> list1={5,4,3,1};
    list<int> list2={7,8,5,3};
    cout<<"list one: ";
    display(list1);
    cout<<"list two: ";
    display(list2);
    
    //sorting
    list1.sort();
    list2.sort();

    //merging two list
    list1.merge(list2);
    display(list1);
    
    return 0;
}


