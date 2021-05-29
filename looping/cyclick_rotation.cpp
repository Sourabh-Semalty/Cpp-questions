#include<iostream>
using namespace std;

void CyclicRotation(int arr[],int size) {
  int end = arr[size - 1];
  for(int i = 4g;i > 0;i--) {
    arr[i] = arr[i-1];
  }
  arr[0] = end;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int rotation = 1;

  for(int i= 0;i < rotation;i++) {
    CyclicRotation(arr,5);
  }
  for(int i=0;i<5;i++) {
    cout << arr[i];
  }
  return 0;
}
