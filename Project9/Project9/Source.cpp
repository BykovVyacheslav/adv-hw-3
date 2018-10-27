#include <iostream>
using namespace std;

int main() {
	int i = 0, N, K, L, r;
	cout << "Enter number of kegles: ";
	cin >> N;
	int *mas = new int[N];
	for (i = 0; i < N; i++) {
		mas[i] = 1;
	}
	cout << "Enter number of throws: ";
	cin >> K;
	for (i = 0; i < K; i++) {
		cout << "Enter L to r: ";
		cin >> L >> r;
		for (int j = L - 1; j < r; j++) {
			mas[j] = 0;
		}
	}	
	cout << endl;
	for (i = 0; i < N; i++) {
		if (mas[i] == 1) {cout << "I";}
		            else {cout << ".";}
	}
	cin.get();
	cin.get();
}