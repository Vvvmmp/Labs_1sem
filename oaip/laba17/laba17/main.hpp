#include <iostream>

using namespace std;

void main1() {
	int size, max = 0, min = 100, sum = 0;
	cout << "¬ведите размер массива: ";
	cin >> size;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 10 + 10;// {10; 19}
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}

	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}

		if (max < array[i]) {
			max = array[i];
		}
	}
	cout << endl << "max= " << max << endl;
	cout << endl << "min= " << min << endl;

	sum = max + min;
	cout << endl << "sum= " << sum << endl;

	delete[] array;
}

void main2(){
	int rows, cols;
	

	cout << "¬ведите кол-во строк: ";
	cin >> rows;
	cout << "¬ведите кол-во столбцов: ";
	cin >> cols;



	int** array = new int* [rows];

	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = rand() % 10 - 5;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}

	
	for (int i = 0; i < rows; i++) {
		bool findzero = false;
		for (int j = 0; j < cols; j++) {
			if (array[i][j] == 0) {
				findzero = true;
				break;
			}
		}

		if (!findzero) {
			for (int j = 0; j < cols; j++) {
				if (array[i][j] < 0) {
					array[i][j] = 0;
				}
			}
		}
	}

	cout << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}




	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}