#include <iostream>

using namespace std;

void dop8() {
  

    int A = 127;
    char tmp[33];

    _itoa_s(A, tmp, 2);
    cout << " ����� A:    " << tmp << endl;

  
    int mask = 0x12;  
    _itoa_s(mask, tmp, 2);
    cout << " ����� ��� A: " << tmp << endl;

    A &= ~mask;

    _itoa_s(A, tmp, 2);
    cout << " ���������:  " << tmp << endl << endl;
}

void dop88() {
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

void dop16() {
    char tmp[33];
    int A, B, maskA = 14;
    int maskB = ~maskA >> 1;
    cout << "������ ����� �="; cin >> A;
    cout << "������ ����� �="; cin >> B;
    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;
    _itoa_s(maskA, tmp, 2);
    cout << "����� ��� �: " << tmp << endl;
    _itoa_s((A & maskA) >> 1, tmp, 2);
    cout << "���������� ���� �: " << tmp << endl;
    _itoa_s(maskB, tmp, 2);
    cout << "����� ��� �: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << " ������� ���� � B: " << tmp << endl;
    _itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
    cout << " ��������� B=" << tmp << endl;

}

void dop1616() {
    int A = 150; char tmp[33];
    _itoa_s(A, tmp, 2);
    cout << " ����� �: " << tmp << endl;
    int maskA = 0x3 << 3;
    _itoa_s(maskA, tmp, 2);
    cout << " ����� ��� �: " << tmp << endl;

    _itoa_s(A | maskA, tmp, 2);
    cout << " ���������: " << tmp << endl << endl;

}

void dop15() {
    int A; char tmp[33];
    cout << "������� ����� ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "����� � �������� ���� = " << tmp << endl;
    if ((A & 1) == 0)
        cout << "����� ������ 2" << endl;
    else
        cout << "����� �� ������ 2" << endl;

}

void dop1515() {
    int A, n, p;
    char tmp[33];
    cout << "������� �=";
    cin >> A;
    cout << "������� n=";
    cin >> n;
    cout << "������� p=";
    cin >> p;

    _itoa_s(A, tmp, 2);
    cout << " ����� � � �������� �.�.=" << tmp << endl;

    int maskA = ~((1 << (p+n)) - (1 << p ));
    _itoa_s(maskA, tmp, 2);
    cout << " ����� ��� �: " << tmp << endl;
    _itoa_s(A & maskA, tmp, 2);
    cout << " ���������: " << tmp << endl << endl;

}