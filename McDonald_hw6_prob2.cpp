#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream myfile; // declare an output file stream object myfile
	myfile.open("MultiplicationTable.txt");

int rows, columns;
int multiple;
	for (rows = 1; rows <= 9; rows++){
	  for (columns = 1; columns <= rows; columns++){
		multiple = rows * columns;
		cout<< multiple << " ";
		myfile<< multiple << " ";
}
cout<< endl;
myfile<< endl;
}

return 0;
}

