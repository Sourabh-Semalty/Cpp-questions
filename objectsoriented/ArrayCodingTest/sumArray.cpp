#include<iostream>

class SumOfArrayElements {
      int arr[5] = {1,2,3,4,5};
      int size = sizeof(arr)/sizeof(arr[0]);
      public:
      int sum() {
        int total = 0; // assigning to zero so, it won't take any garbage value
        for(int i=0;i<size;i++) {
          total+=arr[i];
        }
      return total;
      }
};


int main() {
  SumOfArrayElements sum;
  std::cout << "The total is : \t" << sum.sum();
}