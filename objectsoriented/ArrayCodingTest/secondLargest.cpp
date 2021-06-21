#include<iostream>
#include<algorithm>
using namespace std;

class Secondlargest{
    int arr[5] = {1,23,4,5,6};
    public:

    // sort the array to find the second largest element in an array
    int size = sizeof(arr)/sizeof(arr[0]);
    int findSecondLargest() {
      sort(arr,arr+size);
      return arr[1];
    }

};

int main() {
  Secondlargest sl;
  cout << "The second largest element is " <<sl.findSecondLargest();
}