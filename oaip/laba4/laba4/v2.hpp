
#include <iomanip>
#include <iostream>
using namespace std;
static void v2() {
	setlocale(LC_CTYPE, "Russian");
	char a;
	char probel = ' ';
	cout << "¬ведите символ: ";
	cin >> a;

	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(a) << a << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(6) << setfill(a) << a << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(8) << setfill(a) << a << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(10) << setfill(a) << a << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(8) << setfill(a) << a << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(6) << setfill(a) << a << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(a) << a << endl;
}



static void v2n2(){
	setlocale(LC_CTYPE, "Russian");
	float a;
	cout << "¬ведите число: ";
	cin >> a;
	/*if (a < 5) {
		cout << "¬ведЄнное число нельз€ разделить на части, разность которых даЄт 5";
	}
	else {*/
		float a1 = (a - 5) / 2;
		double part1 = a1;
		double part2 = a1 + 5;
		cout << "перва€ часть равна " << part1 << endl;
		cout << "втора€ часть равна " << part2 << endl;
		

	



}