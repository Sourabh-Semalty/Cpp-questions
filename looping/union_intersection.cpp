#include<iostream>
using namespace std;
void printIntersection(int arr1[],int arr2[],int arr1size,int arr2size) {
  int max = arr1size > arr2size ? arr1size : arr2size;
  int min = arr1size < arr2size ? arr1size : arr2size;
  int unionArray[max];
  int count = 0;    
  for(int i=0;i<min;i++) {
    for(int j=0;j<max;j++) {
      if(arr2[i] == arr1[j]) {
        unionArray[count] = arr2[i];
        count+=1;
      }
    }
  }

  for(int i = 0;i < count;i++) {
    cout<<unionArray[i];
  }
}
int main() {
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {1,4,5,8};

  printIntersection(arr1,arr2,5,3);
  // printUnion(arr1,arr2,5,3);
  return 0;
}