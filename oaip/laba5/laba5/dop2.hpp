#include <iostream>

using namespace std;

static void dop2() {
	setlocale(LC_CTYPE, "Russian");
	cout << "������� ���������� ����� ������(a,b) � �����(k,1): ";
		int a, b, k; 
	cin >> a >> b >> k;
	if (a > 8 || b > 8 || k > 8 || a < 1 || a < 1 || b < 1 || (k == a && 1 == b)) 
		cout << "������������ ��������";
	
	else {
		if (abs(k - a) == abs(1 - b)) 
			cout << "���� �������� ������, ������� � ������ " << a << " " << b << endl; 

		else
			cout << "���� �� �������� ������, �����e� � ������ " << a << " " << b << endl;
	}





	
}