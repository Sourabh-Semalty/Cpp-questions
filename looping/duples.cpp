#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int arr[] = {1,1,1,1,1,1,1};
  int size = sizeof(arr)/sizeof(arr[0]);  
  int result[size];
  int resultCounter = 1;
  int previous = arr[0];
  result[0] = previous;
  for(int i=0;i < size ;i++) {
    if(previous != arr[i]) {
      result[resultCounter] = arr[i];
      resultCounter++;
    }
    previous = arr[i];
  }

  for(int i = 0 ;i< resultCounter;i++) {
    cout << result[i];
  }
}