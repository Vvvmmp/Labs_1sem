#include <iostream>


using namespace std;

void osn1() {
	
	int array[100], i, size, max = -1, min = 9999, imax, imin;
	cout << "Введите размер массива: ";
	cin >> size;
	cout << "Массив: ";
	srand(time(NULL));
	for (i = 0; i < size; i++) {

		array[i] = rand() % 100;
		cout << array[i] << "  ";
		if (array[i] > max) {
			max = array[i];
			imax = i;
		}
		if (array[i] < min) {
			min = array[i];
			imin = i;
		}
	}
	array[imax] = array[imin];
	array[imin] = max;
	cout << endl << endl << endl;
	
	for (i = 0; i < size; i++) {
		
		cout << array[i] << "  ";
	}
	cout << endl << endl;
	cout << max << endl;
	cout << min;

}

void osn2() {

	srand(time(NULL));
	const int SIZE = 10;
	int Arr1[SIZE];
	int Arr2[SIZE];
	int minTemp[SIZE] = { 0 };
	bool IsRepeted = true;

	float average = 0;

	for (int i = 0; i < SIZE; i++){
		Arr1[i] = rand() % 100;
		cout << Arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
		average += Arr1[i];
	average /= SIZE;

	for (int i = 0; i < SIZE; i++)
		if (Arr1[i] < average)
			minTemp[i] = Arr1[i];

	for (int i = 0; i < SIZE; i++){
		Arr2[i] = rand() % 100;
		cout << Arr2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (minTemp[i] != Arr2[j]) {
				IsRepeted = false;
			}
			else {
				IsRepeted = true;
				break;
			}
		}
		if (!IsRepeted) {
			cout << minTemp[i] << " ";
		}
	}
}