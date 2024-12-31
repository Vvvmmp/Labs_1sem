#include <iostream>

using namespace std;

static void dop2() {
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите координаты вашей фигуры(a,b) и слона(k,1): ";
		int a, b, k; 
	cin >> a >> b >> k;
	if (a > 8 || b > 8 || k > 8 || a < 1 || a < 1 || b < 1 || (k == a && 1 == b)) 
		cout << "Недопустимые значения";
	
	else {
		if (abs(k - a) == abs(1 - b)) 
			cout << "Слон угрожает фигуре, стоящей в клетке " << a << " " << b << endl; 

		else
			cout << "Слон не угрожает фигуре, стоящeй в клетке " << a << " " << b << endl;
	}





	
}