#include<iostream>
using namespace std;
int main() {
  int num1 = 6 , num2 = 10;
  int min = num1 > num2 ? num1 : num2;
  int hcf = 0;
  for(int i=2; i <= min ; i++) {
    if(num1%i == 0 && num2%i == 0) {
    hcf = i;
    }
  }
  cout << "HCF = " <<hcf <<endl;
  cout << "LCM = " << (num1 * num2)/ hcf << endl;
}