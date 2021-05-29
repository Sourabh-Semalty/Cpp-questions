#include<iostream>
#include<set>

using namespace std;

int main() {
  int arr[] = {1,2,1,1,3,3,2,23,3,34354,314,2121};
  int size = sizeof(arr)/sizeof(arr[0]);  
  set<int> a;
  for(int i=0;i<size;i++) {
    a.insert(arr[i]);
  }
  set<int>::iterator x = a.begin();
  do {
    cout << *x << endl;
  } while(++x != a.end());
  
  return 0;
}