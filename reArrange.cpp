// Given an array arr[] of size N where every element is in the range from 0 to n-1. 
// Rearrange the given array so that arr[i] becomes arr[arr[i]].
#include<iostream>
using namespace std;
int main() {
  int arr[] = {4,0,2,1,3};
  int size = sizeof(arr)/sizeof(arr[0]);
  int newArr[size];

  // ! 4+1 5
  for(int i =0; i<size;i++) {
    cout<< arr[arr[i]];
    cout << arr[i];
  }
  return 0;
}