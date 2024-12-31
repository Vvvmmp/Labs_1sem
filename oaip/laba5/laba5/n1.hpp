#include <iostream>


using namespace std;

 static void n1() {
	setlocale(LC_CTYPE, "Russian");

	double a, b, c;

	cout << " Введите числовые значения переменных а, b и с : ";

	cin >> a >>  b >> c;
	 
	double d = pow(b,2) - 4 * a * c;
	if (d < 0)
		cout << "Корней нет" << endl;
	else {
		double x1 = (-b + sqrt(d)) / (a * 2);
		double x2 = (-b - sqrt(d)) / (a * 2);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

}