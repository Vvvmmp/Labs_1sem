#include <iostream>

using namespace std;

static void dop5() {
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, r, s, t;
	cout << "������� ������� �������: ";
	cin >> a >> b >> c;
	cout << "������� ������� �������: ";
	cin >> r >> s >> t;
	if (r <= a && s <= b && t <= c) 	
		cout << "������� ����� �������� � �������" << endl;

	else
		cout << "������� ���������� �������� � ��������" << endl;
}