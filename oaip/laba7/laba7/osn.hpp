#include <iostream>

using namespace std;

void osn1() {
	setlocale(LC_ALL, "rus");
	double f = 1.2, s, y, j = -7e-3, w = 2;
	while (w <= 5) {
		s = w / (pow(w, 2) - j) * log(abs(w));
		

		if (s >= 3 * sqrt(f)) {
			y = s - exp(f / j);
		}
		else {
			y = pow(s, 2) / w;
		}
		cout << "s= " << s << " y= " << y << " w= " << w << endl;
		w += 0.5;
	}
}

void osn2() {
	for (int i = 99; i >=10; i--) {
		if (i % 10 != i / 10)
			cout << i << endl;
	}
}