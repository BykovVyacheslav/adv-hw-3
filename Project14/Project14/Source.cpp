#include <iostream>
using namespace std;

int main() {
	signed int a, b, c, x1, x2;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	signed int d = (b*b) - (4*a*c);
	x1 = (-b + sqrt(d)) / (a * 2);
	x2 = (-b - sqrt(d)) / (a * 2);
	if (d > 0) {
		if (x1 < x2) { cout << "x1= " << x1 << "; " << "x2= " << x2 << endl; }
		if (x1 > x2) { cout << "x1= " << x2 << "; " << "x2= " << x1 << endl; }
	}
	if (d == 0) { cout << "x= " << x1; }
	system("pause");
	return 0;
}