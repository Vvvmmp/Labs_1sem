#include <iomanip>
#include <iostream>
using namespace std;
static void v6(){
	setlocale(LC_CTYPE, "Russian");

	char c, probel;
	probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(41) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;

	cout << setw(40) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	cout << setw(39) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;

	cout << setw(38) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;


	cout << setw(26) << setfill(probel) << probel;
	cout << setw(33) << setfill(c) << c << endl;

	cout << setw(28) << setfill(probel) << probel;
	cout << setw(29) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;


	/*cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;*/

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c;
	cout << setw(15) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	cout << setw(29) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(23) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
}
static void v6n2(){
	setlocale(LC_CTYPE, "Russian");
	double x1, y1, x2, y2;
	
	cout << "Введите координаты первой точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки: ";
	cin >> x2 >> y2;
	
	 double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "Расстояние между точками: " << distance << endl;
}