#include<iostream>
#define MAX 10
using namespace std;

class ReadIO {
  int arr[MAX];
  public:
  void readArray() {
    cout << "Enter the 3 elements in an array" << endl;
    for(int i=0;i<3;i++) {
      cout << "Enter the " << i << " element : \t";
      cin >> arr[i];
      cout << endl;
    }   
  }
  void displayArray() {
    cout << "The entered array elements are:" << endl;
    for(int i=0;i<3;i++) {
      cout << "The"<< i <<" elements is : \t"<< arr[i] << endl;
    }
  }
};


int main() {
  ReadIO io;
  io.readArray();
  io.displayArray();
}