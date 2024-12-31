#include <iostream>
#include <cmath>

using namespace std;


void dop3() {
	setlocale(LC_ALL, "rus");
	double c1, c2;
	cout << "Введите сколько было литров в 1 кувшине и во 2: ";
		cin >> c1 >> c2;
		cout << endl;
		for (int i = 0; i < 6; i++) {
			
			
			c2 += c1 / 2;
			c1 /= 2;
			c1 += c2 / 2;
			c2 /= 2;
		}
		cout << c1 << " литров в 1 кувшине и " << c2 << "литров во 2 кувшине останется после 12 переливаний" << endl;
}

bool divide2(int i) { return i % 2 == 0; }

bool divide7(int i) { return i % 7 == 0; }

bool divide11(int i) { return i % 11 == 0; }

bool sum30(int i) { 
	int d = i % 10;
	int c = (i % 100 - d) / 10;
	int a = i / 1000;
	int b = (i / 100) % 10;
	return (a + b + c + d) == 30;
}

bool abab(int i) {
	int d = i % 10;
	int c = (i % 100 - d) / 10;
	int a = i / 1000;
	int b = (i / 100) % 10;
	return (a == b == c || a == b == d || a == c == d || b == c == d || a == b && c == d || a == c && b == d || a == d && b == c);
}

void dop4() {
	setlocale(LC_ALL, "rus");
	
	for (int i = 1000; i <= 9999; i++) {
		if ( divide2(i) && divide7(i) && divide11(i) && sum30(i) && abab(i) ){
			
			cout << endl << endl << i << endl << endl;
		}

	}
	
	
}

bool abc(int j) {
	int a = j / 100;
	int c = j % 10;
	int b = (j / 10) % 10;

	return (a < b && b < c );
}
bool kor(int j) {
	return ((float)sqrt(j) == (int)sqrt(j));
}

void dop1() {
	for (int j = 100; j < 1000; j++) {
		if (abc(j) && kor(j)) {
			cout << j << endl;
		}
	}
}

