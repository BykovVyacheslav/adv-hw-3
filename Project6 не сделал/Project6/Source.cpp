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
	n = mas[0]; //�������� 0� �������, ����� �� ��������
	for (i = 1; i < a; i++) {
		mas[0] = mas[i]; // �������� ������� ������� �� ��������� ������ 1
		mas[i] = n;   // �������� � ������� ������ ����������
		n = mas[0]; // �������� �� ��������� ����
	}
	mas[a] = n;
	for (i = 0; i < a; i++) {
		cout << mas[i] << " ";
	}
	cin.get();
	cin.get();
}