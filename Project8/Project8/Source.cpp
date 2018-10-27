#include <iostream>
using namespace std;

int main() {
	int a, i = 0, n=0, k=0, m=0;
	cout << "Enter size of massive: ";
	cin >> a;
	int *mas = new int[a];
	cout << "Enter elements of massive: ";
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	cout << endl;
	for (i = 0; i < a; i++) {
		n = 1;
		for (int j = 0; j < a; j++) {
			if (mas[i] == mas[j] && i != j) {
				n = 0;
				break;
			}
		}
		if (n == 1) { cout << mas[i] << " "; }
	}
	cin.get();
	cin.get();
}