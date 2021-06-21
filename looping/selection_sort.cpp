#include<iostream>
using namespace std;

void swap_pos_data(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int arr[],int size) {
    int min_pos;
  for(int i =0;i<size-1;i++) {
    min_pos = i;
    for(int j=i+1;j<size;j++) {
      if(arr[j] < arr[min_pos]) {
        min_pos = j;
      }
    swap_pos_data(&arr[min_pos],&arr[i]);
    }
  }
  for(int i=0;i<size;i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  int arr[] = {1,132,4,2,124,44};
  int size = sizeof(arr)/sizeof(arr[0]);

  selectionSort(arr,size);
} 