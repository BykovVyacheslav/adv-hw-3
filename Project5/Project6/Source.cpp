#include <iostream>
using namespace std;

int main() {
	int i = 0, a, n = 0;
	cout << "Enter size of massive: ";
	cin >> a;
	int *mas = new int[a];
	cout << "Enter elements of massive: ";
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	cout << endl;
	for (i = 0; i < a; i + 2) {
		mas[i] = n;
		mas[i] = mas[i + 1];
		mas[i + 1] = n;
	}
	for (i = 0; i < a; i++) {
		cout << mas[i];
	}
	cin.get();
	cin.get();
}