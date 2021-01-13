#include <iostream>
#include <vector>
using namespace std; 

double dotProduct(vector<double>&a, vector<double>&b){ 

int dot = 0;
if( a.size() == b.size() ){
for( int i=0; i<a.size(); i++ ) {
	dot += a[i]*b[i];
}
}
return dot;
} 

int main(){ 
vector<double> a = {2.1,2.2,4.1}; 
vector<double> b = {-3.0,0.0,-0.25}; // you should not assume a or b always have a size 3 // 

double result = dotProduct(a, b);
if (result==0){
	cout << "The vectors are not of the same size, can not compute" << endl;
}else{
cout << "The dot product of the two vectors is " << result << endl;
}
return 0; 
}

