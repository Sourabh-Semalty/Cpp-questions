// <!-- :Write a C program to calculate profit or loss. -->

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  float costprice, sellingPrice , total;
  cout<<"Enter the cost price :\t" ;
  cin >> costprice;
  cout <<"Enter the selling price :\t";
  cin >> sellingPrice;
  total = sellingPrice - costprice;
  if((total) > 0) {
    cout << "Profit is : \t"<< total; 
  } else if(total < 0) {
    cout << "Loss is : \t"<< total; 
  } else if(total == 0) {
    cout << "No loss No Profit"; 
  }
  return 0;
}
