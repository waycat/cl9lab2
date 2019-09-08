// cl9lab2.cpp : Defines the entry point for the application.
//

#include "cl9lab2.h"

using namespace std;

int main()
{
	double square,perimeter,p, a, b, c;

	cout << "input triangle side a: ";
	cin >> a;
	cout << "input triangle side b: ";
	cin >> b;
	cout << "input triangle side c: ";
	cin >> c;
	perimeter = a + b + c;
	cout << "Perimeter is: " << perimeter << endl;
	p = perimeter / 2;
	square = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Square is: " << square << endl;

	return 0;
}
