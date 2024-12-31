using namespace std;

void main1() {
	int size, min=INT_MAX, imin, sum = 0, firstpos, lastpos;
	cout << "¬ведите размерность массива: ";
	cin >> size;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 10 - 4;
    }

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}

	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			imin = i;
	}
	}
	cout << "\n\n" << min << "\n\n";

	for (int i = 0; i < size; i++) {
		if (array[i] > 0) {
			firstpos = i;
			break;
	}
	}

	for (int i = 0; i < size; i++) {
		if (array[i] > 0) {
			firstpos = i;
		}
	}

	/*for(int i = firstpos; i < )*/


	cout << sum << "\n\n";

	delete[] array;

}

void main2() {

	int rows, cols, inum = -1;
	cout << "¬ведите кол-во строк: ";
	cin >> rows;
	cout << "¬ведите кол-во столбцов: ";
	cin >> cols;
	int** array = new int*[rows];
	srand(time(NULL));

	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = rand() % 15 - 5;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "\n\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] < 0) {
				inum = i;
				break;
			}
		}
		if (inum > -1)
			break;
	}
	cout << "\n" << inum << "\n";
	for (int i = 0; i < rows; i++) {
		array[i][inum] /= 2;
	}

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