#include <iostream>

using namespace std;

static void v6() {
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "������� ���������� �����: ";
	cin >> a;
	
	
		if (a < 100 || a > 999)
			cout << "��� �� ���������� �����" << endl;
		else {
			int n1 = a / 100;
			int n2 = (a / 10) % 10;
			int n3 = a % 10;

			if (n1 == 0 || n2 == 0 || n3 == 0 || n1 == 1 || n2 == 1 || n3 == 1) {
				cout << "����� �������� 1 ��� 0" << endl;
			}
			else {
				cout << "����� �� �������� 1 ��� 0" << endl;
			}
		}
}
		

