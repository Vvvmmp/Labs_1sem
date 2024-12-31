#include <iostream>
#include "main.hpp"
#include "others.hpp"

int main() {
	setlocale(0, "");
	int choice;
	while (true) {
		cout << "\nВыберите вариант (1-8):";
		cout << "\nОсновное задание(1)";
		cout << "\nОсновное задание.2(2)";
		cout << "\nДоп вариант8(3)";
		cout << "\nДоп вариант8.2(4)";
		cout << "\nДоп вариант10(5)";
		cout << "\nДоп вариант10.2(6)";
		cout << "\nДоп вариант16(7)";
		cout << "\nДоп вариант16.2(8)";
		cout << "\nВыход - 9\n";
		cin >> choice;
		if (!cin) {
			cout << "Ошибка: Введен неверный номер варианта. Попробуйте еще раз." << endl;
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
			cout << "Программа завершена." << endl;
			return 0;
		default:
			cout << "Ошибка: Введен неверный номер варианта. Попробуйте еще раз." << endl;
			break;

		}

	}
	return 0;
}