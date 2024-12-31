#include <iostream>

using namespace std;

void dop1() {
	double h, s = 0, b, a, x, y;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / 200;
	x = a;
	y = pow(x, 3) - 1;


	while (x < (b - h)) {

		s = s + h * ( pow(x, 3) - 1 + pow((x + h), 3) - 1 ) / 2;
		x = x + h;

	}
	cout << "s= " << s << endl;
}

void dop11() {
	double h, s, s1 = 0, s2 = 0, b, a, x, y;
	int i = 1, n = 200;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / (2 * n);
	x = a + 2 * h;



	while (i < n) {
		y = pow(x, 3) - 1;
		s2 += y;
		x += h;
		y = pow(x, 3) - 1;
		s1 += y;
		x += h;
		i += 1;

	}
	s = h / 3 * ((pow(a, 3) - 1) + 4 * (pow(a + h, 3) - 1) + 4 * s1 + 2 * s2 + (pow(b, 3) - 1));
	cout << "s= " << s << endl;
}

void dop111() {
	double h, s = 0, b, a, x, y, e = 0.0001;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;

		if ((pow(x,3) + x - 3) * (pow(a, 3) + a - 3) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << "x= " << x;
}




void dop2() {
	double h, s = 0, b, a, x, y;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / 200;
	x = a;
	y = pow(cos(x),3);


	while (x < (b - h)) {

		s = s + h * (pow(cos(x), 3) + pow(cos(x+h), 3)) / 2;
		x = x + h;

	}
	cout << "s= " << s << endl;
}

void dop22() {
	double h, s, s1 = 0, s2 = 0, b, a, x, y;
	int i = 1, n = 200;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / (2 * n);
	x = a + 2 * h;



	while (i < n) {
		y = pow(cos(x), 3);
		s2 += y;
		x += h;
		y = pow(cos(x), 3);
		s1 += y;
		x += h;
		i += 1;

	}
	s = h / 3 * (pow(cos(x), 3) + 4 * pow(cos(x+h), 3) + 4 * s1 + 2 * s2 + pow(cos(b), 3));
	cout << "s= " << s << endl;
}

void dop222() {
	double h, s = 0, b, a, x, y, e = 0.0001;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;

		if ((cos(x) + x - 7) * (cos(a) + a - 7) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << "x= " << x;
}




void dop3() {
	double h, s = 0, b, a, x, y;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;


	h = (b - a) / 200;
	x = a;
	y = 1 + pow(x, 3);


	while (x < (b - h)) {

		s = s + h * (1 + pow(x, 3) + 1 + pow((x + h), 3)) / 2;
		x = x + h;

	}
	cout << "s= " << s << endl;

}

void dop33() {
	double h, s, s1 = 0, s2 = 0, b, a, x, y;
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
	s = h / 3 * ((1 + pow(a, 3)) + 4 * (1 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	cout << "s= " << s << endl;

}

void dop333() {
	double h, s = 0, b, a, x, y, e = 0.0001;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;

		if ((pow(x,3) + 2*x -1) * (pow(a, 3) + 2 * a - 1) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << "x= " << x;
}