#include<iostream>
using namespace std;
 
int main() {
  int arr[2][2] = {{1,0}, {1,1}};
  int newArr[2];
  int count = 0;
  int max;
  for(int i =0;i<2;i++) {
    count = 0;
    for(int j=0;j<2;j++) {
      if(arr[i][j] == 1) {
        count +=1;
        newArr[i] = count;
      }
    }
  }
  
  for(int i =0;i<2;i++) {
    if(newArr[i] > newArr[i+1]) {
      max = newArr[i];
    } else {
      max = newArr[i+1];
    }
  }
  cout << max;
  return 0;
}