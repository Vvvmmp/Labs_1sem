#include <iostream>


using namespace std;

void others3() {
	int size, firstzero, lastzero, sum = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 5;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}

	for (int i = 0; i < size; i++) {
		if (array[i] == 0) {
			firstzero = i;
			break;
		}
	}
		for (int i = 0; i < size; i++) {
			if (array[i] == 0) {
				lastzero = i;
			}
	}
		for (int i = firstzero + 1; i < lastzero; i++) {
			sum += array[i];
	}
	cout << endl << "sum= " << sum << endl;

	delete[] array;
}

void others33() {
	int rows, cols;
	int irows = -1;
	int sum = 0;
	bool allPlus;

	cout << "������� ���-�� �����: ";
	cin >> rows;
	cout << "������� ���-�� ��������: ";
	cin >> cols;

	srand(time(NULL));

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
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		allPlus = true;
		for (int j = 0; j < cols; j++) {
			if (array[i][j] < 0) {
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
		cout << "�� ���� ������� ������ ������� � �������������� ����������";
		exit(0);
	}

	for (int j = 0; j < cols; j++) {
		sum += array[irows][j];
	}

	cout << endl << endl << sum << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] -= sum;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}

int find(int* k)
{
	int* A = new int[*k];
	srand(time(0));
	for (int i = 0; i < *k; i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	cout << endl << "������: ";
	for (int i = 0; i < *k; i++)
	{
		if (A[i] % 2 == 0 && (i + 1) % 2 == 1)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}

void others10() {
	int n;
	cout << "������� ����������� �������: "; cin >> n;
	find(&n);
}

void find(int** A, int m, int n)
{
	int maxval = INT_MIN;
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] > maxval)
			{
				maxval = A[i][j];
				count = 1;
			}
			else if (A[i][j] == maxval)
			{
				++count;
			}
		}
	}
	cout << "������������ ��������: " << maxval << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (A[i][j] == maxval)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	cout << "���������� ����������: " << count << endl;
}

void others1010() {
	int m, n;
	cout << "������� ���������� ����� � ��������: ";
	cin >> m >> n;

	int** A = new int* [m];
	for (int i = 0; i < m; i++)
	{
		A[i] = new int[n];
	}

	srand(time(0));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 20;
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	find(A, m, n);

	for (int i = 0; i < m; i++)
	{
		delete[] A[i];
	}
	delete[] A;
}

void find14(int* arr, int size)
{
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << endl;
	cout << "����������� ��������: " << min << endl;
	cout << "������������ ��������: " << max << endl;
	cout << "��������: " << max - min << endl;
}

void others14() {
	int size;
	cout << "������� ������ �������: ";
	cin >> size;

	int* arr = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20+ 5;
		cout << arr[i] << " ";
	}

	find14(arr, size);

	delete[] arr;
}

void change(int** arr, int rows, int cols)
{
	for (int j = 0; j < cols; j++)
	{
		int k = 0;
		for (int i = 0; i < rows; i++)
		{
			if (arr[i][j] >= 0)
			{
				k++;
			}
			if (k == rows)
			{
				if (j != 0)
				{
					for (int i = 0; i < rows; i++)
					{
						arr[i][j - 1] *= -1;
					}
				}
				if (j != 0)
				{
					for (int i = 0; i < rows; i++)
					{
						arr[i][j] *= -1;
					}
				}
			}
		}

	}
}

void others1414() {
	int n, m;
	cout << "������� ���������� ����� � ��������: ";
	cin >> n >> m;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 50 - 5;
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	change(arr, n, m);


	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}