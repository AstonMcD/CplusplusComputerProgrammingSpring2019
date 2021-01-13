#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main () {

double x;
int Round;
double half;


cout << "Type in a positive number you would like to use Banker's Rounding on." << endl;
	cin >> x;

Round = round(x);
half = x + 0.5;

if ((half == Round) && (Round % 2 == 1)) {
	Round = Round - 1;
	cout << Round << endl;
} else {
	cout << "The rounded number is " << Round << endl;
}

return 0;
}
