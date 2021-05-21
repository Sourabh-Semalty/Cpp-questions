#include<iostream>
using namespace std;

int main() {
  float temp;
  cout << "Enter the temperature" << endl;
  cin >> temp;
  cout << "Temperature in celcius is :\t" << (temp * 5/9) + 32 << endl;
  cout << "Temperature in Fahrenheit is :\t" << (temp - 32)  * 5/9;
  return 0;
}