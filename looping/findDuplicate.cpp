#include<iostream>
#include<algorithm>
using namespace std; 

int main() {
  // for positive
  int arr[] =  {1,2,3,1,1,3,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  int freq[size];

  for (int i = 0; i < size; i++)
  {
    freq[i] = -1;
  }
  for(int i = 0;i<size;i++) {
    int count = 1;
    for(int j=i+1;j<size;j++) {
      if(arr[i] != -1) {
        if(arr[i] == arr[j]) {
          count++;
          arr[j] = -1;
        }
      }
    }
    if(arr[i] != -1) {
      freq[i] = count;
    }
  }

  for(int i=0;i<size;i++) {
    if(freq[i] != -1) {
      cout << "count of " <<arr[i] << "\t:\t" << freq[i] << endl;
    }
  }
  

  return 0;
}