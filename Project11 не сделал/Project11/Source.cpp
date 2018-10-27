#include <iostream>
using namespace std;

int main() {
	int i = 0, a, k = 0;
	int mas[10000];
	cout << "Enter number of string: ";
	cin >> k;
	//int *mas = new int[a];
	cout << endl;
	mas[0] = 1;
	mas[1] = 1;
	for (i = 1; i < 10000; i++) {
		mas[i] = mas[i - 1] + mas[i];
		cout << mas[i] << endl;
	}
	//for (i = 0; i < a; i++) { cout << mas[i]; }
	cin.get();
	cin.get();
}