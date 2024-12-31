#include <iostream>


using namespace std;

void dop1() {
	int n;
	int x, sum = 0;
	cout << "¬ведите n: ";
	cin >> n;
	
	
	for (int i = 1; i <= n; i++) {
		cout << "¬ведите x: ";
		cin >> x;
		if (i % 2 == 0)
			sum += x;

	}
	cout << endl <<  sum << endl;
}


void dop2() {
	int n;
	int x, a, b;
	cout << "¬ведите n: ";
	cin >> n;

	
	for (int i = 1; i <= n; i++) {
		cout << "¬ведите x" << i <<  ": ";
		cin >> x;
		if (x < 0) {
			a = i;
			b = x;

		}

	}
	cout << endl << a << endl;
	cout << endl << b << endl;

}

void dop3() {
	int n, max, min, count = 0;
	float x;
	cout << "¬ведите n: ";
	cin >> n;

	float* array = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "¬ведите x: ";
		cin >> x;
		array[i] = x;
	}
	max = 0;
	min = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < array[min])
			min = i;
		if (array[i] > array[max])
			max = i;
	
	}
	if (min < max) {


		for (int i = min + 1; i < max; i++) {
			count++;
		}
		cout << count;

	}
	else (int i = max; i < min + 1; i++) {
		count++;
	}
}
