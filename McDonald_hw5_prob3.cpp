#include <iostream>
#include <cmath>
using namespace std;
int main () {

int N;
double w;
double y;

double A;
double sumA;
double approxPi;
double error;

cout << "Please enter a positive integer to determine the amount of rectangles you would like to use to estimate PI" << endl;
cin >> N;

while (N < 0) {
	cout << "That integer is not positive. Please enter another." << endl;
	cin >> N;
}

w = 1/double(N);
sumA = 0;

for (int i = 1; i <= N; i++) {

	y = sqrt(1- ((w * i) * (w * i)));
	A = w*y;
	sumA = sumA + A;
}
approxPi = 4 * sumA;

error = approxPi-3.14159265;
if (error < 0) {
	error = error*(-1);
}
cout << "The estimated value of Pi is " << approxPi << endl;
cout << "The difference between the estimated value of Pi and Pi is " << error << endl;

return 0;
}
	

