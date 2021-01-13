#include <iostream>
using namespace std;

int reverseInteger(int n) {

int rN = 0, remainder;

    while(n != 0)
    {
        remainder = n % 10;
        rN = rN * 10 + remainder;
        n = n/10;
    }
return rN;
}
int main() {
int userN;
    cout << "please enter an integer you want to reverse: ";
    cin >> userN;
int reversedInteger = reverseInteger(userN);
cout << reversedInteger << endl;


    return 0;
}
