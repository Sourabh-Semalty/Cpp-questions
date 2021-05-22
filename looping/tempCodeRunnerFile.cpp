#include<iostream>
using namespace std;

void printAllAlphabets() {
  char ch;
  cout << "A to Z" << endl;
  for (int i = 65; i <= 90; i++)
  {
    ch = i;
    cout << ch << endl;
  }
  cout << "a to z" << endl;

    for (int i = 97; i <= 122; i++)
  {
    ch = i;
    cout << ch << endl;
  }
  
}
int main() {
  printAllAlphabets();
}