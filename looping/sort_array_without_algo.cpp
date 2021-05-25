#include<iostream>
using namespace std;
 int main() {
  int arr[5] = {0, 2 ,1, 2, 0};
  // count total zero
  int zero = 0;
  int one = 0;
  int two = 0;
  for (int i = 0; i < 5; i++)
  {
    if(arr[i] == 0) {
      zero += 1;
    } else if(arr[i] == 1) {
      one += 1;
    } else if(arr[i] == 2) {
      two += 1;
    }
  }
  
  for(int i = 0;i<5;i++) {
    if(zero - 1 >= i) arr[i] = 0;
    else if(zero + one - 1 >= i)   arr[i] = 1;
    else if(zero+one+two - 1 >= i) arr[i] = 2;
    cout << arr[i];
  }
  return 0;
}