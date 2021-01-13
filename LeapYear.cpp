#include <iostream>
using namespace std; 
int main (){ 

int year; 
bool isLeapYear; 
cout << "What year would you like to see is a leap year?" << endl;
cin >> year; // you can assume this is a valid input 

if ((year % 4 == 0) && (year % 100 != 0)) {
	isLeapYear = true;
} else if ((year % 100 == 0) && (year % 400 == 0)) {
	isLeapYear = true;
} else {
	isLeapYear = false;
}


if (isLeapYear){ 
  cout << year << " is a leap year." << endl; 
}else{ 
  cout << year << " is not a leap year." << endl; } 

return 0; 
}

