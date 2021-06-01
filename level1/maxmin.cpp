// ? Program to find the minimum (or maximum) element of an array

#include<iostream>
using namespace std;

int getMin(int arr[],int size) {
  if(size == 1) return arr[0];
  int max = arr[0];
  for(int i=1;i<size;i++) {
    if(max > arr[i]) max = arr[i];
  }
  return max;
}
int getMax(int arr[],int size) {
  if(size == 1) return arr[0];
  int max = arr[0];
  for(int i=1;i<size;i++) {
    if(max < arr[i]) max = arr[i];
  }
  return max;
}
int main() {
  int arr[] =  {2, 8, 1, 3, 6, 7, 5, 4};
  int size = sizeof(arr)/sizeof(arr[0]);
  int min = getMin(arr,size);
  int max = getMax(arr,size);
  cout << "Minimum number is \t:\t" << min<<endl;
  cout << "Maximum number is \t:\t" << max;

  return 0;
}
