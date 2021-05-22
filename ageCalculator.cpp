#include<iostream>
#include<string>
using namespace std;

int carry = 0;
// Not perfect answer right now but i'm working on this
// * splitting the string from - so, that i can get month year and day differently
int* split(string str) {
  int* arr = new int[100];
  int inc = 0;
  string cat = "";
  for(int i = 0;i<str.length();i++) {
    if(str[i] == '-') {
      cat = "";
      inc++;
    } else {
      cat += str[i];
      arr[inc] = stoi(cat);
    }
  }  
  return arr;
}
// * calculation the month date and year of the user
int calMonthDateYear(int dob, int today,string carry_type) {

  if(today < dob) {
  // We need to take carry as well, because if the number of today is smaller than dob we need to take a carry from the next variable
      if(carry_type == "month") {
      today += 31;
      carry = 1;
      } else if(carry_type == "year") {
        today += 12;
        carry = 1;
      } 
      return  today - dob;
    } else {
      return today - dob;
    }
}

// to check if the string is in right format
// int checkFormat(string date) {
//   int* arr = split(date);
//   cout << sizeof(arr)/sizeof(int);
  

//   return 0;
// }
int main() {
  // Kindly Please input the date of birth or today date in YYYY-MM-DD format
  // * Taking dob and todayDate as string so, that i can split the thing in - format
  // int* dateOfBirth, todayDate;
  // * using 3 length because we need to store 3 value we need to store 1. year 2. month 3. days
  string dob;
  string today; 

  // if(!checkFormat(dobArr) && !checkFormat(todayArr)) {
  //  cout <<"The date format is not correct " << endl;
  //  cout << "Kindly input the date YYYY-MM-DD format";
  //   return 0; 
  // }
  cout << "Enter date of birth in YYYY-MM-DD" << endl;
  cin >> dob;
  cout << "Enter Today Date in YYYY-MM-DD" << endl;
  cin >> today;



  int* dateOfBirth = split(dob);
  int* todayDate = split(today);
  
  // Simple Formula is Today - DOB;
  int totalDays = calMonthDateYear(dateOfBirth[2],todayDate[2],"month");
  // * here we are checking while subtracting the day if there is an carry than we are reducing them from month also
  if(carry == 1) {
    todayDate[1] -= 1;
// setting carry to 0 so, that it will only work when there is a carry
    carry = 0;
  }
  int totalMonth = calMonthDateYear(dateOfBirth[1],todayDate[1],"year");
  // * here we are checking while subtracting the month if there is an carry than we are reducing them from year also
  if(carry == 1) {  
    todayDate[0] -= 1;
    carry = 0;
  }
  int totalYear = calMonthDateYear(dateOfBirth[0],todayDate[0],"");

  cout <<"Your are : \t";
  cout << totalYear << " years "; 
  cout << totalMonth << " month ";
  cout << totalDays << " day old ";

  return 0;
}