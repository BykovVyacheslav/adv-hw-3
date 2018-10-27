#include <iostream>
using namespace std;

int main() {
	int k = 0;
	char s[10000], c;
	cout << "Enter text: ";
	cin.getline(s, 10000);
	cout << "Enter symbol: ";
	cin >> c;
	for (int i = 0; i < 10000; i++) {
		if (s[i] == c) { cout << i << " "; }
	}
	cout << endl;
	system("pause");
	return 0;
}