#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
	int iterations;
	   iterations = 0;
	int nInner;
	   nInner = 0;
	double radius;
	   radius = 0.5;
	int nTotal;
	double x, y;
	double distance;
	double approxPi;
	double difference;

srand(time(NULL));

cout << "Please enter a positive integer for the amount of Data Points you would like to use to assess the accuracy of the estimate of Pi using Monte Carlo's Method." << endl;
	cin >> nTotal;
cout << "The amount of data points that will be tested is " << nTotal << endl;


while (iterations < nTotal) {
	iterations++;
x = double(rand())/double(RAND_MAX);
y = double(rand())/double(RAND_MAX); 

distance = (0.5-x)*(0.5-x)+(0.5-y)*(0.5-y);
distance = sqrt(distance);

if (distance <= radius){
	nInner++;
}
}

	approxPi = 4*((double)nInner/(double)nTotal);
cout << "The amount of points within the circle is " << nInner << endl;
cout << "The estimated value of Pi is " << approxPi << endl;
	
	difference = approxPi-3.14159265;
if (difference < 0) {
	difference = difference*(-1);
}
cout << "The difference between the estimated value of Pi and Pi is " << difference << endl;


return 0;
}


