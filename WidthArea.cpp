#include <iostream>

using namespace std;

int main() {

    int width,height,area,perimeter;

    cout<<"Enter Width of the Rectangle = ";
    cin>>width;
    cout<<"Enter  Height of the Rectangle = ";
    cin>>height;

    area=height*width;

    cout<<"Area of Rectangle is "<<area<<endl;

    perimeter=2*(height+width);

	cout<<" Perimeter of rectangle is "<<perimeter<<endl;

	return 0;

}
