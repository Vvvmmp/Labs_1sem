#include <iostream>

using namespace std;

static void dop5() {
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, r, s, t;
	cout << "Введите размеры коробки: ";
	cin >> a >> b >> c;
	cout << "Введите размеры посылки: ";
	cin >> r >> s >> t;
	if (r <= a && s <= b && t <= c) 	
		cout << "Коробку можно вместить в посылку" << endl;

	else
		cout << "Коробку невозможно вместить в упаковку" << endl;
}