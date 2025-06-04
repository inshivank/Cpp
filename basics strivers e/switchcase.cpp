#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter the day number ";
    cin>>day;
    switch(day){
        case 1:
         cout<<"monday";
         break;

        case 2:
         cout<<"tuesday";
         break;
          
        case 3:
         cout<<"wednesday";
         break;

        default:
         cout<<"non of case mathches ";

        

    }
    return 0;
}