// ? Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].


#include<iostream>
#include <cmath>
int main() {
  int arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 23} ;
  int size = sizeof(arr)/sizeof(arr[0]);
  int x = 23;
  int k = 5;
  int segmentCount = 0;
  for(int i=0;i<size;i+=k) {
  int tempCount = 0;
    for(int j=i;j<i+k;j++) {
      if(arr[j] == x) {
      segmentCount+=1;
        break;
      }
    }
  }

  int segments = ceil((float)size/k);
  if(segmentCount == segments)   std::cout << "Yes";
  else std::cout << "No";
  return 0;
}