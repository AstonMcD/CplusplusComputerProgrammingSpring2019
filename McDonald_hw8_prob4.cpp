#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>&x){
 bool sort = is_sorted(x.begin(), x.end());
	return sort;
}

int main(){

bool TF;
vector<int> a = {1, 2, 5, 6};
	if(isSorted(a)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> b = {5, 6, 0, 1};
	if(isSorted(b)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> c = {};
	if(isSorted(c)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> d = {10};
	if(isSorted(d)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> e = {10, 10};
 	if(isSorted(e)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> f = {10, 10, 20};
 	if(isSorted(f)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
vector<int> g = {10, 10, 20, 5};
	if(isSorted(g)){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
return 0;
}
