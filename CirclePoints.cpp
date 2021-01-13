#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main ()
{

double xcenter;
double ycenter;
double r;
double x1;
double y1;

cout << "What is the x-coordinate for the center of the circle?" << endl;
	cin >> xcenter;
cout << "What is the y-coordinate for the center of the circle?" << endl;
	cin >> ycenter;
cout << "What is the radius of the circle?" << endl;
	cin >> r;
cout << "What is the x-coordinate of the point you want to determine is within the circle?" << endl;
	cin >> x1;
cout << "What is the y-coordinate of the point you want to determine is within the circle?" << endl;
	cin >> y1;

double distance;
distance = (xcenter-x1)*(xcenter-x1)+(ycenter-y1)*(ycenter-y1);
distance = sqrt(distance);

cout << "The distance between the 2 points is " << distance << "." << endl;

if (distance <= r){
	cout << "The point is within the circle." << endl;
} else {
	cout << "The point is outside the circle." << endl;
}

return 0;
}

