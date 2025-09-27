#include <iostream>
#include <cmath>

using namespace std;

//function prototyping
void swap(int& a, int& b);

//declaring variables to eventually swap
int main() {
	int a = 7;
	int b = 6;
	cout << "a is: " << a << " and b is: " << b << endl;

	swap(a, b);
	cout << "a is now: " << a << " and b is now: " << b << endl;
}

void swap(int& a, int& b) {
	int a1 = a;
	a = b;
	b = a1;
}