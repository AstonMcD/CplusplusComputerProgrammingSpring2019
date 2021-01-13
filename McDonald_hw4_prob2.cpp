#include <iostream>
#include <string>

using namespace std;
int main ()
{

int num;
num = 1;

cout << "Please type in an integer that you want to determine if it is even and positive." << endl;
  cin >> num;

while ((num % 2 != 0) || (num <= 0)) {
	cout << "That integer is not even and positive, please put in another." << endl;
	cin >> num;
}

cout << num << " is even and positive." << endl;

return 0;

}
