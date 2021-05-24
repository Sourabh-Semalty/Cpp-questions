#include<iostream>
using namespace std;

void reverse_array(int arr[], int size) {
  int temp;
  for (int i = 0; i < size; i++)
  {
    temp = arr[i];
    arr[i] = arr[size];
    arr[size] = temp;
    size--;
  }
  
}
int main() {
  int arr[5] = {1,2,3,4,5};
  reverse_array(arr,4);
  for(int i =0;i < 5;i++) {
    cout << arr[i];
  }
}