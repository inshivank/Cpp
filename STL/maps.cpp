#include <iostream>
#include <map>
// map is associative array of key: value pairs
using namespace std;

int main() {
    
    //ways to insert values


    //one by one
    // map<string, int> myMap;
    // myMap["apple"] = 5;
    // myMap["banana"] = 10;
    // myMap["mango"] = 7;
    

    //directly
    // map<string, int> myMap = {
    //     {"apple", 5},
    //     {"banana", 10},
    //     {"mango", 7}
    // };



    //taking input from user
    // map<string, int> myMap;
    // int n;
    // cout << "Enter number of entries: ";
    // cin >> n;

    // for (int i = 0; i < n; ++i) {
    // string fruit;
    // int qty;
    // cout << "Enter fruit and quantity: ";
    // cin >> fruit >> qty;
    // myMap[fruit] = qty;
    //  }
    

    //using insert
    // map<string,int> myMap;
    // myMap.insert(make_pair("mango", 7));
    // myMap.insert({"grape", 8}); // cleaner in C++11 and above






    // Accessing/ dislaying values
    cout << "Mango: " << myMap["mango"] << endl;

    // Iterating through map
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
   }

   //classic
   //    for (map<string, int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
   //     cout << it->first << " : " << it->second << endl;
   //    }

   //Range-based
   //for (auto& pair : myMap) {
   //cout << pair.first << " : " << pair.second << endl;
   //}

   
   //Structured Binding
   //for (auto [key, value] : myMap) {
   //   cout << key << " : " << value << endl;
   //}
