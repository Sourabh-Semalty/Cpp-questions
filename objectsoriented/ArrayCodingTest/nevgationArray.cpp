#include<iostream>
using namespace std;


class NegativeArray {
  int arr[5] = {-3,-32,-6,-2,6};
  public: 
  int size = sizeof(arr)/sizeof(arr[0]);
  void displayNegativeElement() {
      cout << "Negative elements are"<<endl;
    for(int i =0;i<size;i++) {
      if(arr[i] < 0)  cout << arr[i] << endl;
    }
  }
};

int main() {
  NegativeArray ar;
  ar.displayNegativeElement();
}