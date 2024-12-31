#include <iomanip>
#include <iostream>
using namespace std;
static void v13()
{
	setlocale(LC_CTYPE, "Russian");

	char c, probel;
	probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(12) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(30) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(30) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;


	cout << setw(36) << setfill(probel) << probel;
	cout << setw(24) << setfill(c) << c << endl;

	cout << setw(38) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;

	cout << setw(40) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;

	cout << setw(42) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;

	cout << setw(46) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
}        



static void v13n2() {
	setlocale(LC_CTYPE, "Russian");
	int N; // Количество косилок
	int M; // Время работы первой косилки в часах

	
	cout << "Введите количество косилок: ";
	cin >> N;
	cout << "Введите время работы первой косилки в часах: ";
	cin >> M;

	double S = 0; 

	
	for (int i = 0; i < N; i++) {
		S += M + i * 10.0 / 60; 
	}

	
	cout << "Общее время работы бригады: " << S << " часов" << endl;
}