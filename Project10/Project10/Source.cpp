#include <iostream>
using namespace std;

int main() {
	int i = 0, a, n = 0;
	cout << "Enter size of massive: ";
	cin >> a;
	int *mas = new int[a];
	cout << "Enter elements of massive:" << endl;
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	cout << endl;
	for (i = 0; i < a; i++) {
		for (i = 0; i < a; i--) {
			if (mas[a - 1] == 9) {
				mas[a - 1] = 0;
			}
		}
	}
	for (i = 0; i < a; i++) { cout << mas[i]; }
	cin.get();
	cin.get();
}