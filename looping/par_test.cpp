#include<iostream>
using namespace std;

int main() {

  int count = 0;
  for(int i = 4;i>0;i/=2) {
    for(int j=0;j<i;j++) {
      cout << "count" << endl;
    }
    cout << endl;
  }
  return 0;
}
// 4 3
// 8 4
// 16 5