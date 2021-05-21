#include<iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number to check if it is divisible by 5 or 11" << endl;
  cin >> number;

//  using the modulus we can get the remainder  
  if(number%5 == 0 || number%11 == 0)     cout << "It is divisible";
  else cout<<"It is not divisible";
  return 0;
}
