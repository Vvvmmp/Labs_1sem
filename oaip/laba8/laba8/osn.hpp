#include <iostream>


using namespace std;

void osn1() {
	int n;
	
	cout << "Введите количество элементов в сумме: ";
	cin >> n;
	float x, b = 1, a = 0;	
	for (int j = 1; j <= n; j++) {
		
		
		cout << "Введите x: ";
		cin >> x;

		if (x > 0) {
			
			
			a += x;
			cout << "a= " << a << endl;
		}
		else {
			
			b*= x;
			cout << "b= " << b << endl;
		}
		cout << "j= "<< j << endl;
	}
}


void osn2() {
	float x[5];
	float xi;
	for (int i = 0; i < 5; i++) {
		cout << "Введите х" << i+1 << ": ";
	
		cin >> xi;
		x[i] = xi;
	}

	float a = x[0];
	for (int i = 0; i < 5;i++ ) {
		if (a > x[i])
			a = x[i];
	}
	
	float c = a;
	for (int i = 0; i < 5; i++) {
		c += (x[i]) / (1 + x[i]);
	}


	cout << endl <<"a= "<< a;
	cout << endl << "c= "<< c;
}
