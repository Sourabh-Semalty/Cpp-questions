#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int arr[] = {2,41,3,45,6};
  int k = 1;
  int size = sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+size);
  cout << "The kth largest element is :\t" << arr[k] << endl;
  cout << "The kth lowest element is :\t" << arr[size-1-k] << endl;  
  return 0;
}