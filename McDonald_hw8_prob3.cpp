#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 

double myAvg(vector<double>&x){
double sum = 0;
	for( int i=0; i<x.size(); i++ ) {
		sum += x[i];
	}
double avg = sum / x.size();
return avg;
}

double standardDeviation(vector<double>&x){
double sDev = 0;
double avg = myAvg(x);
	for (int i=0; i<x.size(); i++ ) {
		sDev += (x[i] - avg) * (x[i] - avg);
	}
sDev = sqrt(sDev / (x.size() - 1));
return sDev;
}

int main(){

vector<double> x = {3.5, 5.5, -1.7, 9.6, 0, -2.7, 20.5}; 
	double avg = myAvg(x);
	cout << "The average is " << avg << endl;

	double sDev = standardDeviation(x);
	cout << "The standard deviation is " << sDev << endl;

return 0;
}

	





