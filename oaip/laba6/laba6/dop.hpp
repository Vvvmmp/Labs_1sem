#include <iostream>

using namespace std;

 void dop1() {
	setlocale(LC_ALL, "Rus");
	float P, Q;
	int n = 0;
		cout << "�� ����� ����� ����� ����������� ����� � ������ ���� ������? ";
		cin >> P;
		cout << "������������ ������� (� Byn): ";
		cin >> Q;

		while (P <= Q) {
			P = P * 1.03;
			n += 1;
		}
		cout << "������������ ������� = " << P << " Byn " << "���� �� " << n << " ���� ������.";



}



 void dop2() {
	setlocale(LC_ALL, "Rus");
	
	int n;
	double p;

	cout << "������� ��� ����� �������� ������������? ";
	cin >> n;

	cout << "������� ������� �����������: ";
	cin >> p;

	
	double fullcost = 0;
	double cost;
	double cost1 = 0;

	for (int j = 1; j <= n; j++) {
		cout << "��������� ������ ������������: ";
		cin >> cost;
		cost1 += cost;
	}

	for (int i = 1; i <= n; i++) {
		cout << "������� ��������� ������������ �� " << i << " ���: ";
		
		cost1 -= cost1 * (p / 100);
		

	}
	cout << "����� ��������� ������������ ������������ �� " << n << " ���: " << cost1 << " ������" << endl;
}

 void dop3() {
	setlocale(LC_ALL, "Russian");  
	int a = 0, k;

	cout << "������� �����: ";
	cin >> k;
	cout << endl << endl;

	while (k > 0){
		if (k % 10 != 3 && k % 10 != 6)
		{
			a *= 10;
			a += k % 10;
		}
		k /= 10;
	}

	cout << "���������� �����: "; 

	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
		
	}
	cout << endl << endl;
}

