#include <iostream>
using namespace std;

int main() {
	int *mas = new int;
	int i = 0, a, n = 0, mins = 2147483647;
	cout << "Enter size of massive: ";
	cin >> a;
	cout << "Enter elements of massive:" << endl;
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	for (i = 0; i < a; i++) {
		if (mas[i] > 0 && mas[i] < mins) {
			mins = mas[i];
		}
	}
	cout << mins;
	cin.get();
	cin.get();
}