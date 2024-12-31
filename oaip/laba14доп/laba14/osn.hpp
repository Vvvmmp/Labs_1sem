#include <iostream>

using namespace std;

void osn1() {
	int rows, cols, col1, col2, temp = 0;

	cout << "¬ведите кол-во строк: ";
	cin >> rows;
	cout << "¬ведите кол-во столбцов: ";
	cin >> cols;



	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "¬ведите номер 1 столбца: ";
	cin >> col1;
	cout << "¬ведите номер 2 столбца: ";
	cin >> col2;

	for (int i = 0; i < rows; i++) {
		temp = arr[i][col1];
		arr[i][col1] = arr[i][col2];
		arr[i][col2] = temp;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	
}

void osn2() {
	int rows, cols;
	int irows = -1;
	int sum = 0;
	bool allPlus;

	cout << "¬ведите кол-во строк: ";
	cin >> rows;
	cout << "¬ведите кол-во столбцов: ";
	cin >> cols;



	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 15 - 5;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		allPlus = true;
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] < 0) {
				allPlus = false;
				break;
			}
		}	
		if (allPlus) {
			irows = i;
			break;
		}
	}

	cout << endl << endl << irows << endl << endl;
	if (irows == -1) {
		cout << "Ќе было найдено строки матрицы с положительными элементами";
		exit(0);
	}

		for (int j = 0; j < cols; j++) {
			sum += arr[irows][j];
		}

		cout << endl << endl << sum << endl << endl;
	
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				arr[i][j] -= sum;
			}
		}
	



	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

}

