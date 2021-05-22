#include<iostream>
using namespace std;

// void printAllAlphabets() {
//   char ch;
//   cout << "From A to Z" << endl;
//   for (int i = 65; i <= 90; i++)
//   {
//     ch = i;
//     cout << ch << "\t";
//   }
//   cout << endl;
//   cout << "From a to z" << endl;

//     for (int i = 97; i <= 122; i++)
//   {
//     ch = i;
//     cout << ch << "\t";;
//   }
  
// }
void printAllAlphabets() {
  char ch;
  cout << "From A to Z" << endl;
  int i = 65;
while(i <= 90)
  {
    ch = i;
    cout << ch << "\t";
    i++;
  }
  cout << endl;
  cout << "From a to z" << endl;
    i = 97;
  while(i <= 122)
  {
    ch = i;
    cout << ch << "\t";;
    i++;
  }
  
}
int main() {
  printAllAlphabets();
}