#include<iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            int n=x;
            int r,rev=0; //inilize rev to zero
            while(n>0){
            r=n%10;   //for last digit

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && r > 7)) {
                return false;  // Overflow will occur, return false
            }

            
            rev=rev*10+r;
            n=n/10;  // for divisor lie for 432/10 = 43
            }
            if(rev==x)
             return true;
            else
             return false;
        }

};

int main(){
    int num=121;
    Solution s;
    bool result=s.isPalindrome(num);
    cout<<result;
    return 0;
}