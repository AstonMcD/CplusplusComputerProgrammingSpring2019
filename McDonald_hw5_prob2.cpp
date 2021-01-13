#include <iostream>
#include <cmath>
using namespace std;
int main () {

int n;
int n1;
int n2;
n1 = 0;
n2 = 1;
int Fib;

cout << "Please enter a positive integer you would like to use for the nth element in the Fibonacci Sequence." << endl;
cin >> n;

while (n < 0) {
	cout << "That integer is not positive. Please enter another." << endl;
	cin >> n;
}

cout << "Term " << n << " in the sequence is :" << endl;


for (int i = 1; i <= n; i++) {
	Fib = n1 + n2;
	n1 = n2;
	n2 = Fib;

}

if (n == 0) {
	Fib = 0;
}
cout << Fib << endl;

return 0;
}
