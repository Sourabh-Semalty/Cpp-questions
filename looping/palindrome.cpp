#include<cmath>
#include<iostream>  
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        int rev = 0;
        int temp = x;
        while(x > 0) {
            int pop = x % 10;
            if(rev > (pow(2,31)-1)/10 || rev < pow(-2,31)/10) {
                return 0;
            } 
            rev = rev * 10 + pop;
            x /= 10;
        }
        if(temp == rev) return 1;
        else return 0;
    }
};

int main() {
  Solution s;
  cout << s.isPalindrome(121);
  return 0;
}