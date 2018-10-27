#include <iostream>
using namespace std;

int main() {
	int *mas = new int;
	int i = 0, a, n = 0;
	cout << "Enter size of massive: ";
	cin >> a;
	cout << "Enter elements of massive:" << endl;
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	for (i = 1; i < a; i++) {
		if (mas[i] != mas[i - 1]) {
			n++;
		}
	}
	cout << n;
	cin.get();
	cin.get();
}