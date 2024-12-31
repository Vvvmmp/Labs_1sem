#include <iostream>

using namespace std;

void dop1() {
	int n;

	cout << "¬ведите n: ";
	cin >> n;

	int** arr = new int* [2*n];

	for (int i = 0; i < 2*n; i++) {
		arr[i] = new int[2 * n];
	}

	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			arr[i][j] = rand() % 21 - 10;
		}
	}

	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			swap(arr[i][j], arr[i + n][j + n]);
		}
	}

	
	for (int i = 0; i < n; i++) {
		for (int j = n; j < n * 2; j++) {
			swap(arr[i][j], arr[i + n][j - n]);
		}
	}

	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

void dop2() {
	int n;

	cout << "¬ведите n: ";
	cin >> n;



	int** arr = new int* [n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1+j;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = (arr[i - 1][j] + 1) % n  ;
		}
	}


	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) {
				arr[i][j] = n;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

void dop3() {
	int n;
	int max = -1;//INT_MIN;

	cout << "¬ведите n: ";
	cin >> n;

	int** arr = new int* [n];
	int* diag = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 90 + 9;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	int i_index = 0, j_index = 0;
	for(int k = 0; k < n; k++){ //массив
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] > max) {
					max = arr[i][j];
					i_index = i;
					j_index = j;
					//cout << i_index << ' ' << j_index << endl;
				}

			}
		}
		arr[i_index][j_index] = 10;
		diag[k] = max;
		max = 0;
	}
	/*cout << endl;
	for (int k = 0; k < n; k++) {
		cout << diag[k] << "  ";
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}*/

	for (int k = 0; k < n; k++) {
	
				arr[k][k] = diag[k];
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}