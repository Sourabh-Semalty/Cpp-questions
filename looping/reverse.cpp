#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int pop;
        while(x!=0) {
             pop = x % 10;
            if(rev > (pow(2,31)-1)/10) {
                return 0;
            } 
            if(rev < pow(-2,31)/10) {
                return 0;
            }
          rev = rev * 10 + pop;
          x = x/10;
        }
        return rev;
    }
};

int main() {
  Solution s; 
  cout << s.reverse(1463847412);
}