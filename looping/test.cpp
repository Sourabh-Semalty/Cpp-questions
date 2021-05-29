#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = (n+1) * (n+2)/2;
    cout << total;
    return 0;
}