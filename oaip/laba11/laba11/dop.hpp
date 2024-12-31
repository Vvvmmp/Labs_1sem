#include <iostream>

using namespace std;

void dop8() {
  

    int A = 127;
    char tmp[33];

    _itoa_s(A, tmp, 2);
    cout << " Число A:    " << tmp << endl;

  
    int mask = 0x12;  
    _itoa_s(mask, tmp, 2);
    cout << " Маска для A: " << tmp << endl;

    A &= ~mask;

    _itoa_s(A, tmp, 2);
    cout << " Результат:  " << tmp << endl << endl;
}

void dop88() {
    char tmp[33];
    int A, B;

    cout << "Первое число А=";
    cin >> A;
    cout << "Второе число В=";
    cin >> B;

    int n;
    cout << "Введите позицию n: ";
    cin >> n;
    int maskA = 7 << (n - 1);

    int m;
    cout << "Введите позицию m: ";
    cin >> m;
    int maskB = ~(7 << (m - 1));

    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;

    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;

    _itoa_s(maskA, tmp, 2);
    cout << "Маска для А: " << tmp << endl;

    _itoa_s((A & maskA) >> (n - 1), tmp, 2);
    cout << "Выделенные биты А: " << tmp << endl;

    _itoa_s(maskB, tmp, 2);
    cout << "Маска для В: " << tmp << endl;

    _itoa_s((B & maskB) | ((A & maskA) >> (n - 1) << (m - 1)), tmp, 2);
    cout << "Результат B=" << tmp << endl;
}

void dop16() {
    char tmp[33];
    int A, B, maskA = 14;
    int maskB = ~maskA >> 1;
    cout << "Первое число А="; cin >> A;
    cout << "Второе число В="; cin >> B;
    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;
    _itoa_s(maskA, tmp, 2);
    cout << "Маска для А: " << tmp << endl;
    _itoa_s((A & maskA) >> 1, tmp, 2);
    cout << "Выделенные биты А: " << tmp << endl;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска для В: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << " Очищены биты в B: " << tmp << endl;
    _itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
    cout << " Результат B=" << tmp << endl;

}

void dop1616() {
    int A = 150; char tmp[33];
    _itoa_s(A, tmp, 2);
    cout << " Число А: " << tmp << endl;
    int maskA = 0x3 << 3;
    _itoa_s(maskA, tmp, 2);
    cout << " Маска для А: " << tmp << endl;

    _itoa_s(A | maskA, tmp, 2);
    cout << " Результат: " << tmp << endl << endl;

}

void dop15() {
    int A; char tmp[33];
    cout << "Введите число ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    if ((A & 1) == 0)
        cout << "Число кратно 2" << endl;
    else
        cout << "Число не кратно 2" << endl;

}

void dop1515() {
    int A, n, p;
    char tmp[33];
    cout << "Введите А=";
    cin >> A;
    cout << "Введите n=";
    cin >> n;
    cout << "Введите p=";
    cin >> p;

    _itoa_s(A, tmp, 2);
    cout << " Число А в двоичной с.с.=" << tmp << endl;

    int maskA = ~((1 << (p+n)) - (1 << p ));
    _itoa_s(maskA, tmp, 2);
    cout << " Маска для А: " << tmp << endl;
    _itoa_s(A & maskA, tmp, 2);
    cout << " Результат: " << tmp << endl << endl;

}