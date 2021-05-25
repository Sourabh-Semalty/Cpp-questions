#include<iostream>
using namespace std;

void sort(int arr[], int size) {
  int temp = 0;
  for(int i =0 ; i< size;i++) {
    for(int j=i+1;j < size;j++) {
      if(arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void display(int min,int max,int location) {
  string suffix;
  if(location == 1)  suffix = "st";
  else if(location == 2) suffix = "nd";
  else if(location == 3) suffix = "rd";
  else suffix = "th";
  cout << "Minimum value in " << location << suffix + "is" << min << endl;
  cout << "Maximum value is" << location << suffix + "is" << max;
}

void find_Kth_Min_Max(int arr[],int size,int kth) {
  sort(arr,size);
  display(arr[kth],arr[ size - kth - 1],kth);
}

int main() {
  int array[5] = {2,1,6,98,4};
  int kth = 2;
  find_Kth_Min_Max(array,5,kth);
}