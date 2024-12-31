#include <iostream>


using namespace std;

void others8() {
	int rows, cols;
	int negative = 0, positive = 0, zero = 0;

	cout << "������� ���-�� �����: ";
	cin >> rows;
	cout << "������� ���-�� ��������: ";
	cin >> cols;



	int** array = new int* [rows];

	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = rand() % 10 -5;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] > 0) {
				positive++;
			}
			if (array[i][j] < 0) {
				negative++;
			}
			if (array[i][j] == 0) {
				zero++;
			}
		}
	}
	
	cout << "���-�� ������������� ���������: \t" << positive << endl;
	cout << "���-�� ������������� ���������: \t" << negative << endl;
	cout << "���-�� ������� ���������: \t" << zero << endl;


	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}

void others88(){
	const int sz = 1000;
	char *str = new char[sz];

	cout << "������� ������: ";
	cin.getline(str, sz);



	int count = 0;
	bool isWord = false;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {
			
			if (!isWord) {
				count++;
				isWord = true;
			}
		}
		else {
		
			isWord = false;
		}
	}

	cout << "����� ���������� ����: " << count << endl;
}

void others1010() {
	const int sz = 1000, sz2 = 100, sz3 = 100;
	char* str = new char[sz], * str2 = new char[sz2], * str3 = new char[sz3];
	char change;

	cout << "������� ������: ";
	cin.ignore();
	cin.getline(str, sz);
	int f = strlen(str);
	int count = 0, m = 0, s = 0, fval, lval, mval, j = 0;
	bool isWord = false;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {

			if (!isWord) {
				count++;
				isWord = true;
			}
		}
		else {

			isWord = false;
		}
	}
	if (count % 2 != 0)
	{
		cout << "���������� ���� ��������" << endl;
	}
	else
	{
		for (int i = 0; i < f; i++)
		{
			if (str[i] == ' ' || str[i] == '\0')
			{
				s++;
				if (s == (count / 2) - 1)
				{
					fval = i;
				}
				if (s == count / 2)
				{
					mval = i;
				}
				if (s == (count / 2) + 1)
				{
					lval = i;
				}

			}
		}
		for (int k = fval; k < mval; k++)
		{
			str2[j] = str[k];
			j++;
		}
		int b = j;
		j = 0;
		for (int k = mval; k < lval; k++)
		{
			str3[j] = str[k];
			j++;
		}
		int h = 0;
		for (int k = fval; h < j; k++)
		{
			str[k] = str3[h];
			h++;
		}
		h = 0;
		for (int k = fval + j; h < b; k++)
		{
			str[k] = str2[h];
			h++;
		}

		for (int k = 0; k < f; k++)
		{
			cout << str[k];
		}
	}

}

void others10() {
	int N, M, k, val = 0;
	cout << "������� ���������� ����� � ��������: "; cin >> N >> M;
	cout << "������� ����� k: "; cin >> k;
	int** A = new int* [N];
	for (int i = 0; i < N; i++) {
		A[i] = new int[M];
	}
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			A[i][j] = rand() % 20;
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	for (int j = 0; j < M; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (A[i][j] == k)
			{
				val = j;
			}
		}
	}
	if (val == 0)
	{
		cout << "�� � ����� ������� ���� ����� " << k;
	}
	else {
		cout << "� " << val << " ������� ��������� ����� " << k;
	}
}

void others16() {
	int N, max = INT_MIN, count = 0;
	cout << "������� ���������� �����: "; cin >> N;
	int* A = new int[N];
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	for (int i = 0; i < N; i++)
	{

		if (A[i] > max)
		{
			max = A[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i] == max)
		{
			count++;
		}
	}
	cout << endl << count;
}

void others1616() {
	const int sz = 100;
	int min = INT_MAX, max = INT_MIN, m = 0, k = 0, fval1, fval2, lval;
	int length = 0;
	char* str = new char[sz];


	cout << "������� ������: ";
	cin.ignore();
	cin.getline(str, sz);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			length++;
		}
		else {
			if (length > 0 && length < min) {
				min = length;
				fval1 = i;
				m = i - length;
			}
			length = 0;
		}
	}

	for (int i = m; i < fval1; i++) {
		std::cout << str[i];
	}

	length = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			length++;
		}
		else {
			if (length > 0 && length > max) {
				max = length;
				fval2 = i;
				k = i - length;
			}
			length = 0;
		}
	}

	std::cout << std::endl;

	for (int i = k; i < fval2; i++) {
		std::cout << str[i];
	}

	delete[] str;
}