#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    
    Student(int a, string b) {
        id = a;
        name = b;
    }
};

int main() {
    vector<Student> v;

    // --- Using push_back ---
    Student s1(1, "John");  // create object first
    v.push_back(s1);        // then push it into vector

    // --- Using emplace_back ---
    v.emplace_back(2, "Alice"); // directly create and insert

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].id << " " << v[i].name << endl;
    }

    return 0;
}
