#include <iostream>
 
using namespace std;

static void n3() {
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "�� ������ ���������? (1- ��, 2- ���)";
	cin >> a;
	switch (a)
	{
	case 1: cout << "����� ����� ��� ������ ��������? (1- ���������, 2- ������, 3- ���������)";
		cin >> a;
		switch (a) {
		case 1: cout << "������� ��� �������� � ������� ��� ����" << endl; break;
		case 2: cout << "������� ��� �������� � Atomic Heart ��� CS 2" << endl; break;
		case 3: cout << "������� ��� �������� � �������� ��� ���������" << endl; break;
		}
		break;
	case 2: cout << "��� �� � ��� � ���� �������������" << endl; break;

	default: cout << "������������ �����" << endl;
	}
	
}