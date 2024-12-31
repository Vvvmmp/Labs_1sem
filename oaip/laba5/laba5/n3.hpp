#include <iostream>
 
using namespace std;

static void n3() {
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "Вы любите видеоигры? (1- да, 2- нет)";
	cin >> a;
	switch (a)
	{
	case 1: cout << "Какие жанры вам больше нравятся? (1- стратегии, 2- шутеры, 3- песочницы)";
		cin >> a;
		switch (a) {
		case 1: cout << "Советую вам поиграть в Шахматы или Доту" << endl; break;
		case 2: cout << "Советую вам поиграть в Atomic Heart или CS 2" << endl; break;
		case 3: cout << "Советую вам поиграть в Террарию или майнкрафт" << endl; break;
		}
		break;
	case 2: cout << "Нам не о чем с вами разговаривать" << endl; break;

	default: cout << "Некорректный ответ" << endl;
	}
	
}