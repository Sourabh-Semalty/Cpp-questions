#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class Solution {
public:
    int WaveArray(int *arr,int n) {
      int size = sizeof(arr)/sizeof(arr[0]);
      for(int i =0; i<size;i++) {
        if(arr[i] < arr[i+1]) {
          int temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
          i+=1;
        }
      }
      for(int i =0; i<size;i++) {
        cout << arr[i];
      }
      return 0;
    }
};

int main() {
  Solution s;
  int arr[] = {6,9,0,7};
  s.WaveArray(arr,4);
  // s.WaveArray();
  // s.WaveArray();
  // s.WaveArray();
  return 0;
}
