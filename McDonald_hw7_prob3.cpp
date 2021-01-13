#include <iostream>
using namespace std;

int recursive(int n, int k) {
	if ( k==n || k==0 ) return 1;
	return recursive(n-1, k-1) + recursive(n-1, k);
}


int factorial(int a) {
	int nfactorial = 1;
		for (int i = 1; i <= a; i++) {
		nfactorial *= i;
	}
return nfactorial;
}


int nonrecursive(int n, int k) {
	return factorial(n) / (factorial(k) * factorial(n-k));
}
	
int main () {

	int n, k;

cout << "What element of Pascal's Triangle would you like to find?" << endl;
	cout << "enter an n value: ";
	cin >> n;
	cout << endl;

	cout << "enter a k value: ";
	cin >> k;
	cout << endl;

int recursiveResult = recursive(n, k);
cout << "The element is " << recursiveResult << " when using the recursion method." << endl;

int nonrecursiveResult = nonrecursive(n, k);
cout << "The element is " << nonrecursiveResult << " without using the recursion method." << endl;

	if (recursiveResult == nonrecursiveResult) {
		cout << "The recursion method and non-recursion method produce the same result" << endl;
	}

return 0;
}



