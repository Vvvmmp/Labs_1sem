#include <iostream>

using namespace std;

void osn1() {
	int A = 128; char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << " ����� �:    " << tmp << endl;
	_itoa_s(0x55, tmp, 2);
	cout << " ����� ��� �: " << tmp << endl;
	_itoa_s(A | 0x55, tmp, 2);
	cout << " ���������:  " << tmp << endl << endl;
}

void osn2() {
    char tmp[33];
    int A, B;

    cout << "������ ����� �=";
    cin >> A;
    cout << "������ ����� �=";
    cin >> B;

    int n;
    cout << "������� ������� n: ";
    cin >> n;
    int maskA = 7 << (n - 1);

    int m;
    cout << "������� ������� m: ";
    cin >> m;
    int maskB = ~(7 << (m - 1));

    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;

    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;

    _itoa_s(maskA, tmp, 2);
    cout << "����� ��� �: " << tmp << endl;

    _itoa_s((A & maskA) >> (n - 1), tmp, 2);
    cout << "���������� ���� �: " << tmp << endl;

    _itoa_s(maskB, tmp, 2);
    cout << "����� ��� �: " << tmp << endl;

    _itoa_s((B & maskB) | ((A & maskA) >> (n - 1) << (m - 1)), tmp, 2);
    cout << "��������� B=" << tmp << endl;
}