////////////////////////////////////////////////////////////////
//
// Name: Arnulfo Salazar & Alexis Garza
// Date: 10/01/2025
// Class: CSCI 1470.04
// Semester: Fall 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Swap
// Program Description: Swaps ints, doubles, and strings.
//
////////////////////////////////////////////////////////////////


#include <iostream>
#include <cmath>

using namespace std;

//function prototyping
void swap(int& a, int& b);
void swap(double& c, double& d);
void swap(string& e, string& f);

//declaring variables to eventually swap
int main() {
	int a = 7;
	int b = 6;
	double c = 7.69;
	double d = 6.67;
	string e = "World";
	string f = "Hello";
	
	//output for users and swaps
	cout << "a is: " << a << " and b is: " << b << endl;

	swap(a, b);
	cout << "a is now: " << a << " and b is now: " << b << endl;
	
	cout << "c is: " << c << " and d is: " << d << endl;

	swap(c, d);
	cout << "c is now: " << c << " and d is now: " << d << endl;

	cout << "e is: " << e << " and f is: " << f << endl;

	swap(e, f);
	cout << "e is now: " << e << " and f is now: " << f << endl;


}

//function for ints
void swap(int& a, int& b) {
	int a1 = a;
	a = b;
	b = a1;
}

//function for doubles
void swap(double& c, double& d) {
	double c1 = c;
	c = d;
	d = c1;


}

//function for strings
void swap(string& e, string& f) {
	string e1 = e;
	e = f;
	f = e1;


}