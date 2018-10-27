#include <iostream>
using namespace std;

int main() {
	int *mas = new int;
	int i = 0, a, n;
	cout << "Enter size of massive: ";
	cin >> a;
	cout << "Enter elements of massive: ";
	for (int i = 0; i < a; i++) {
		cin >> mas[i];
	}
	cout << endl;
	n = mas[0]; //сохран€ю 0й элемент, чтобы не потер€ть
	for (i = 1; i < a; i++) {
		mas[0] = mas[i]; // сохран€ю текущий элемент во временную €чейку 1
		mas[i] = n;   // вставл€ю в текущую €чейку предыдущий
		n = mas[0]; // оставл€ю на следующий цикл
	}
	mas[a] = n;
	for (i = 0; i < a; i++) {
		cout << mas[i] << " ";
	}
	cin.get();
	cin.get();
}