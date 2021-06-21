#include<iostream>
#define Max 10
using namespace std;
class Array {
    int size ,index, *arr;


    public:
    Array(int); // prototype constructor 
    ~Array(); // prototype desctructor 

    // int getSize(); // get size of an array
    int length(); // get the length of the array
    int getData(int); // get the data from the array

    void insertAtPos(int*,int); // insert value at index of an array
    void insertAtStart(int,int); // insert at the start of array index
};

Array::Array(int size) { // defination of constructor
  arr = new int[size]; // assigning the new memory of array in the old one dynamically
  this->size = size; // intializing the class variable
}


void insertAtEnd(int* arr,int *index,int value) {
  if(*index > Max - 1) {
    cout << "Array is full";
  }
  arr[++*index] = value;
}

int main() {
  int index = 3;
  int arr[Max] = {1,2,3,4};
  insertAtEnd(arr,&index,5);
  insertAtEnd(arr,&index,45);
  for(int i =0;i <= index;i++) {
    cout << arr[i];
  }
  return 0;
}