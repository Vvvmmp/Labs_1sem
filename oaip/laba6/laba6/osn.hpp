#include <iostream>

using namespace std;

 void osn(){
	setlocale(LC_ALL, "Rus");
	double  b = -5.4, m = 4, u = 0.05e-4, k, v, w;

	for (int n = 0; n <= 3; n++) {

		cout << "¬ведите K: ";
		cin >> k;
		v = u + b - 2 * sqrt(0.7 * k + m);
		w = 100 * exp(-0.2 * u) - log(8.1 * u);
		cout << "v= " << v << endl;
		cout << "w= " << w << endl;
	}
}



 void osn2() {
	setlocale(LC_ALL, "Rus");
	double  b = -5.4, m = 4, u = 0.05e-4, k = 3, v, w;

	while (k < 4.2) {

		for (int n = 0; n <= 3; n++) {
			v = u + b - 2 * sqrt(0.7 * k + m);
			w = 100 * exp(-0.2 * u) - log(8.1 * u);
			cout << "v= " << v << endl;
			cout << "w= " << w << endl;
			k = k + 0.2;
		}
	}
}




 void osn3() {
	setlocale(LC_ALL, "Rus");
	double  b = -5.4, m, u = 0.05e-4, k = 7, v, w;

	while (k <= 8) {
		for (int n = 0; n < 3; n++) {
			cout << "¬ведите m: ";
			cin >> m;
			v = u + b - 2 * sqrt(0.7 * k + m);
			w = 100 * exp(-0.2 * u) - log(8.1 * u);
			cout << "v= " << v << endl;
			cout << "w= " << w << endl;
			cout << k << endl;
		}
		k = k + 0.2;
	}
}