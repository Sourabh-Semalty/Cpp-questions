#include<iostream>
using namespace std;

void maximum_min_element(int arr[],int size) {
  int max = arr[0];
  int min = arr[0];
  for(int i=0;i< size-1;i++) {
    if(max < arr[i+1])  max = arr[i+1];
    if(min > arr[i+1])  min = arr[i];
  }
  cout << "Maximum element is = " << max;
  cout << "Minimum element is = " << min;
}
int main() {
  int arr[5] = {1,2,3,4,5};
   maximum_min_element(arr,5);
}