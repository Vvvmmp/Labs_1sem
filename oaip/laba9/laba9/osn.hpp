#include <iostream>

using namespace std;

void osn1() {
	double h, s = 0, b, a, x, y;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	

	h = (b - a) / 200;
	x = a;
	y = 1 + pow(x, 3);
	
	
	while (x <= (b - h)) {
	
		s = s + h * (1 + pow(x, 3) + 1 + pow((x + h), 3)) / 2;
		x = x + h;
		
	}
	cout << "s= " << s << endl;

}

void osn2() {
	double h,s, s1 = 0, s2 = 0, b, a, x, y;
	int i = 1, n = 200;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / (2 * n);
	x = a + 2 * h;
	


	while (i < n) {
		y = 1 + pow(x, 3);
		s2 += y;
		x += h;
		y = 1 + pow(x, 3);
		s1 += y;
		x += h;
		i += 1;

	}
	s = h / 3*( (1 + pow(a, 3)) + 4 * (1 + pow(a+h, 3)) + 4*s1 + 2 * s2 + (1 + pow(b, 3)) );
	cout << "s= " << s << endl;

}

void osn3() {
	double h, s = 0, b, a, x, y, e = 0.0001;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;

		if (((5 * x - 1 + pow(x, 3)) * (5 * a - 1 + pow(a, 3))) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << "x= " << x;
}