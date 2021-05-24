#include<cmath>
#include<iostream>  
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int pop;
        int rev = 0;
        int temp = x;
        while(x!=0) {
            pop = x % 10;
            rev *= 10 + pop;

            x /= 10;
        }
        cout << rev;
        if(temp == rev) return true;
        else return false;
    }
};

int main() {
  Solution s;
  cout << s.isPalindrome(121);
  return 0;
}