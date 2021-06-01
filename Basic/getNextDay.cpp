#include<iostream>
#include <cstring>
using namespace std;

// program to get the next Day 
// here simple info 
// suppose Today is Monday so, after 100 days which day is it 
//  program is totally based on that
void getNextDay(string str[],string today,int days,int size) {
  // getting the location of the day which user have entered
  int location;
  // cout << today.compare(str[0]);
  for(int i=0;i < size;i++) {
    if(today.compare(str[i]) == 0) {
      location = i;
      break;
    } 
  }
  cout << location;
  // now getting the next input day
  int td = days%7;
  // cout << td;
  // below airthmetic operation is the logic to get the date
  location = td+location;
  cout << "The "<<days<<"day is :\t:" << str[location];
}
int main() {
  // Storing all 7 day
  string str[] = {"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
  int size = sizeof(str)/sizeof(str[0]);
  string today;
  int days; 
   cout << "Enter today day\t:\t";
  cin >> today;
  cout << "Input the number to forward the days\t:\t";
  cin >> days;
  getNextDay(str,today,days,size);
  return 0;
}