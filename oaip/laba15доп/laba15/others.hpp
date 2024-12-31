using namespace std;

void others9() {
	int size, mul = 1, min = INT_MAX, imin, sum = 0;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* array = new int[size];
	

	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 20 -5;//{-5; 5}
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}

	for (int i = 0; i < size; i++) {
		if (array[i] > 0) {
			mul *= array[i];
		}
	}

	cout << mul << "\n\n";

	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			imin = i;
		}	
	}
	cout << "\n\n" << min << "\n\n";

	for (int i = 0; i < imin; i++) {
		sum += array[i];
	}
	cout << sum << "\n\n";
	delete[] array;
	

}

void others99() {
	int rows, cols;
	int irows = -1;
	int sum = 0;
	bool allPlus;

	cout << "Введите кол-во строк: ";
	cin >> rows;
	cout << "Введите кол-во столбцов: ";
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
		cout << "Не было найдено строки матрицы с положительными элементами";
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

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void others12() {
	int size, max = INT_MIN, maxcounter = 0;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 20 + 10;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}

	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
			
		}
	}
	cout << "\n\n" << max << "\n\n";

	for (int i = 0; i < size; i++) {
		if (array[i] == max) {
			maxcounter++;
		}
	}
	cout << maxcounter;
	

	delete[] array;

}

void others1212() {
	int rows, cols;
	int irows = -1;
	int sum = 0;
	bool allPlus;

	srand(time(NULL));

	cout << "Введите кол-во строк: ";
	cin >> rows;
	cout << "Введите кол-во столбцов: ";
	cin >> cols;



	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 20 - 5;
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
		cout << "Не было найдено строки матрицы с положительными элементами";
		exit(0);
	}
	else {
		if (irows > 0) {
			irows -= 1;
			for (int j = 0; j < cols; j++) {
				arr[irows][j] *= -1;
			}
		}
	}




	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void others13() {
	int size, min, minlast, sum1 = 0, sum = 0;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 20 - 10;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}


	cout << endl;
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			cout << array[i] << "  ";
			sum1 += array[i];
		}
	}

	cout << "\n\n" << sum1 << "\n\n";

	
	
	for (int i = 0; i < size; i++) {
		if (array[i] < 0) {
			min = i;
			break;
		}
	}

	for (int i = 0; i < size; i++) {
		if (array[i] < 0) {
			minlast = i;
		}
	}

	for (int i = min + 1; i < minlast; i++) {
		sum += array[i];
	}

	cout << sum << "\n\n";


	delete[] array;

}

void others1313() {
	int rows, cols;
	int irows = -1;
	int sum = 0;
	bool allZero;

	srand(time(NULL));

	cout << "Введите кол-во строк: ";
	cin >> rows;
	cout << "Введите кол-во столбцов: ";
	cin >> cols;



	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 2;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		allZero = true;
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] != 0) {
				allZero = false;
				break;
			}
		}
		if (allZero) {
			irows = i;
			break;
		}
	}

	cout << endl << endl << irows << endl << endl;
	if (irows == -1) {
		cout << "Не было найдено строки матрицы с 0";
		exit(0);
	}
	else {
		if (irows > 0) {

			for (int j = 0; j < cols; j++) {
				arr[irows][j] /= 2;
			}
		}
	}




	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}