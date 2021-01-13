#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include <ostream>

using namespace std;
int main(){

double number;
double sum;
sum = 0;
int totalNumbers;
totalNumbers = 0;
double average;
double largestNumber;
largestNumber = -99999999;

ifstream fin;
fin.open("dat_hw4_prob4.txt");

if (fin.is_open()) {
	cout << "File Opened Successfully!" << endl;
	cout << "The list of numbers in this file is:" << endl;


fin >> number;
while (!fin.eof()){
	cout << number << endl;
	fin >> number;
	
	sum = sum+number;
	totalNumbers++;
		if (number > largestNumber){
			largestNumber = number;
}
}

}else{
	cout << "File Failed to Open!" << endl;
}

	average = (sum/(double)totalNumbers);
cout << "The largest number in the set is " << largestNumber << endl;
cout << "There are " << totalNumbers << " number values in the file" << endl;
cout << "The sum of these numbers is " << sum << " and the average is " << average << endl;


fin.close();

return 0;

}
