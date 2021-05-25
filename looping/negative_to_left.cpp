#include<iostream>
using namespace std;

int main() {
  int arr[]  = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
  int a = 0;
  int temp=0;
  for(int i = 0;i < 9;i++) {
    if(arr[i] < 0) {
      if(i != a) {
        temp = arr[i];
        arr[i]=arr[a];
        arr[a]= temp;
      }  
      a++;
    }
  }
  for(int i=0;i<9;i++) {
    cout << arr[i] << " ";
  }
  return 0;
}