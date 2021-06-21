#include<iostream>
using namespace std;

class Maxmin {
  int arr[5] = {4,1,5,8,2};
  public:
  int size = sizeof(arr)/sizeof(arr[0]);
  int Max() {
    int max = arr[0];
    for(int i=0;i<size;i++) {
      if(arr[i] > max)   max = arr[i];
    }
    return max;
  } 

  int Min() {
    int min = arr[0];
    for(int i=0;i<size;i++) {
      if(min > arr[i]) min = arr[i];      
    }
    return min;
  }
};

int main() {
  Maxmin route;
  cout << "The Maximum element in the array is \t"  <<route.Max() << endl;
  cout << "The Maximum element in the array is \t"  << route.Min();
  return 0;
}