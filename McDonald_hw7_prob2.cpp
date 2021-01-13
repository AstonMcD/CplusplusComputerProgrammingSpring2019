#include <iostream>
#include <cmath>
using namespace std;

double trackMyMoney(double money, double intRate, double taxRate, int years) {
	for (int i = 1; i <= years; i++) {
		double newTotal = money * pow(1 + ((intRate/100)/12), 12);
		money = newTotal - ((newTotal - money)*(taxRate/100));
	}
	return money;
}

int main() {

double money;
double intRate;
double taxRate;
int years;

cout << "Let's see how much money will be in your account!" << endl;
cout << "enter your initial deposit: ";
	cin >> money;
	cout << endl;
cout << "enter the interest rate (percent please): ";
	cin >> intRate;
	cout << endl;
cout << "enter the tax rate (percent please): ";
	cin >> taxRate;
	cout << endl;
cout << "How many years is it in the savings account?" << endl;
	cin >> years;

double Total = trackMyMoney(money, intRate, taxRate, years);

cout << "The total money in your savings account after " << years << " years will be " << Total << "!" << endl;

return 0;

}
