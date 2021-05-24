#include<iostream>
using namespace std;

void rotate_by_one(int arr[], int size) {
  int firstItem = arr[0];
  for(int i = 0; i<size;i++) {
      arr[i] = arr[i+1];
  }
  arr[size-1] = firstItem;
}
  
int main() {
    int arr[5] = {1,2,3,4,5};
    int rotation = 2;
    for(int i = 1;i<= rotation ; i++) {
      rotate_by_one(arr,5);
    }
    for(int i = 0; i < 5;i++) {
      cout<< arr[i];
    }
}