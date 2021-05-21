// Write a Cpp program to input any character and check whether it is alphabet, digit or special character.
#include <iostream>
using namespace std;

int main()
{
  //  * Taking input of a character
  char input;
  cout << "Enter any character" << input;
  cin >> input;
  // * Logic to check wether the character is alphabet , digit or special character
  if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
  {
    cout << "Input is alphabet";
  }
  else if (input >= '0' && input <= '9')
  {
    cout << "Input is digit";
  }
  else
  {
    cout << "Input is special character";
  }
  return 0;
}