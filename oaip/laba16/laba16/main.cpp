#include <iostream>
#include "main.hpp"
#include "others.hpp"

int main() {
	setlocale(0, "");
	int choice;
	while (true) {
		cout << "\n�������� ������� (1-8):";
		cout << "\n�������� �������(1)";
		cout << "\n�������� �������.2(2)";
		cout << "\n��� �������8(3)";
		cout << "\n��� �������8.2(4)";
		cout << "\n��� �������10(5)";
		cout << "\n��� �������10.2(6)";
		cout << "\n��� �������16(7)";
		cout << "\n��� �������16.2(8)";
		cout << "\n����� - 9\n";
		cin >> choice;
		if (!cin) {
			cout << "������: ������ �������� ����� ��������. ���������� ��� ���." << endl;
			return 0;
		}
		switch (choice) {
		case 1:
			main1();
			break;

		case 2:
			main2();
			break;

		case 3:
			others8();
			break;

		case 4:
			others88();
			break;

		case 5:
			others10();
			break;

		case 6:
			others1010();
			break;

		case 7:
			others16();
			break;

		case 8:
			others1616();
			break;
		case 9:
			cout << "��������� ���������." << endl;
			return 0;
		default:
			cout << "������: ������ �������� ����� ��������. ���������� ��� ���." << endl;
			break;

		}

	}
	return 0;
}