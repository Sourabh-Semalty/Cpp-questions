#include <iostream>
#include <iterator>
#include <set>

using namespace std;

template<typename T>
void print(T a) {
  cout << "a= " << a;
}


int main() {
  print<float>(3);

  set<int> a;
  int arr[] = {2, 5, 6,7};
  int arr2[] = {2, 5, 7, 9, 10};
  for(int i =0;i<4;i++) {
    a.insert(arr[i]);
  }
  for(int i=0;i<5;i++) {
    a.insert(arr2[i]);
  }
   set<int, greater<int> >::iterator itr;
  for (itr = a.begin(); itr != a.end(); itr++)
  {
    cout << *itr<<" ";
  }
}