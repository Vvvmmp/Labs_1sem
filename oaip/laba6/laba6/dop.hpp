#include <iostream>

using namespace std;

 void dop1() {
	setlocale(LC_ALL, "Rus");
	float P, Q;
	int n = 0;
		cout << "На какую сумму фирма реализовала товар в первый день работы? ";
		cin >> P;
		cout << "Максимальная выручка (в Byn): ";
		cin >> Q;

		while (P <= Q) {
			P = P * 1.03;
			n += 1;
		}
		cout << "Максимальная выручка = " << P << " Byn " << "была на " << n << " день работы.";



}



 void dop2() {
	setlocale(LC_ALL, "Rus");
	
	int n;
	double p;

	cout << "Сколько лет фирма закупала оборудование? ";
	cin >> n;

	cout << "Введите процент амортизации: ";
	cin >> p;

	
	double fullcost = 0;
	double cost;
	double cost1 = 0;

	for (int j = 1; j <= n; j++) {
		cout << "Стоимость одного оборудования: ";
		cin >> cost;
		cost1 += cost;
	}

	for (int i = 1; i <= n; i++) {
		cout << "Введите стоимость оборудования за " << i << " год: ";
		
		cost1 -= cost1 * (p / 100);
		

	}
	cout << "Общая стоимость накопленного оборудования за " << n << " лет: " << cost1 << " рублей" << endl;
}

 void dop3() {
	setlocale(LC_ALL, "Russian");  
	int a = 0, k;

	cout << "Введите число: ";
	cin >> k;
	cout << endl << endl;

	while (k > 0){
		if (k % 10 != 3 && k % 10 != 6)
		{
			a *= 10;
			a += k % 10;
		}
		k /= 10;
	}

	cout << "Полученное число: "; 

	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
		
	}
	cout << endl << endl;
}

