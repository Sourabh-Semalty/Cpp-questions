#include<iostream>
using namespace std;

// * Recursive function to reverse an array

void reverseArray(int arr[],int size) {
  for(int i =0;i<size/2;i++) {
    int temp = arr[size-i-1];
    arr[size-i-1] = arr[i];
    arr[i]= temp;
  }
  for(int i=0;i<size;i++) {
    cout << arr[i];
  }
}
// * Recursive function to reverse an array
int reverseArrayrec(int arr[],int size,int i) {
  if(i > (size/2)) return 0;
  int temp = arr[i];
  arr[i]= arr[size-i-1];
  arr[size-i-1] = temp;
  return reverseArrayrec(arr,size,i+=1);
}
int main() {
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  // Normal
  reverseArray(arr,size);
  // Recursion
  reverseArrayrec(arr,size,0);
  for(int i =0;i<size;i++) {
    cout << arr[i];
  }
  return 0;
}