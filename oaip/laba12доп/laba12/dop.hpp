#include <iostream>

using namespace std;

void dop3() {
    int n, t, val1 = 0, val2 = 0;
    cout << "������� ����������� �������: "; cin >> n;
    int* A = new int[n];
    int* B = new int[n];
    cout << "������� ����� t: "; cin >> t;
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> *(A + i);
        if (*(A + i) < t)
        {
            val1++;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> *(B + i);
        if (*(B + i) < t)
        {
            val2++;
        }
    }
    if (val1 > val2)
    {
        cout << "������ A: ";
        for (int i = 0; i < n; i++)
        {
            cout << *(A + i) << " ";
        }
        cout << endl;
        cout << "� ������� � ����������� ��������� ������ t: " << val1;
        cout << endl << "������ B: ";
        for (int i = 0; i < n; i++)
        {
            cout << *(B + i) << " ";
        }
        cout << endl;
        cout << "� ������� B ���������� ��������� ������ t: " << val2;
    }
    else {
        cout << "������ B: ";
        for (int i = 0; i < n; i++)
        {
            cout << *(B + i) << " ";
        }
        cout << endl;
        cout << "� ������� B ���������� ��������� ������ t: " << val2;
        cout << endl << "������ A: ";
        for (int i = 0; i < n; i++)
        {
            cout << *(A + i) << " ";
        }
        cout << endl;
        cout << "� ������� A ���������� ��������� ������ t: " << val1;
    }
}

void dop33() {
    int n;
    float more = 0, min = 0, ravn = 0;
    cout << "������� ����������� ������� �������: "; cin >> n;
    int* C = new int[n];
    int* B = new int[n];
    for (int k = 0; k < n; k++)
    {
        cout << "������� " << k + 1 << " ������� �������: "; cin >> (*(C + k));
    }
    cout << endl;
    for (int k = 0; k < n; k++)
    {
        cout << "������� " << k + 1 << " ������� �������: "; cin >> (*(B + k));
    }
    for (int k = 0; k < n; k++)
    {
        if (*(C + k) < (*(B + k)))
        {
            min++;
        }
        else {
            if (*(C + k) == (*(B + k))) {
                ravn++;
            }
            else
                more++;
        }
    }
    cout << "A[k] = B[k]: " << ravn << endl;
    cout << "A[k] < B[k]: " << min << endl;
    cout << "A[k] > B[k]: " << more << endl;
}

void dop77() {
    int N, c, k, i = 0;
    int* A = new int[10];

    cout << "������� ����� N: "; cin >> N;
    cout << "������� ����� k: "; cin >> k;
    while (N > 0)
    {
        c = N % 10;
        N = N / 10;
        if (c % k == 0)
        {
            *(A + i) = c;
            i++;
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << *(A + j) << " ";
    }
}

void dop7(){
    int k, n;
    cout << "������� ����� k: ";
    cin >> k;
    cout << "������� ������ �������: ";
    cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> *(A + i);
    }
    cout << "�������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << *(A + i) << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ����� k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) == k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ������ k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) > k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ������ k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) < k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    delete[] A;
}

void dop1212(){
    int k, n;
    cout << "������� ����� k: ";
    cin >> k;
    cout << "������� ������ �������: ";
    cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> *(A + i);
    }
    cout << "�������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << *(A + i) << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ����� k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) == k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ������ k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) > k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    cout << "������ ���������, ������� ������ k: ";
    for (int i = 0; i < n; i++) {
        if (*(A + i) < k)
            cout << i + 1 << ' ';
    }
    cout << endl;
    delete[] A;
}

void dop12() {
    int i, j, n;
    float more = 0, min = 0, ravn = 0;
    cout << "������� ����������� ������� �������: "; cin >> n;
    int* A = new int[n];
    int* B = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> (*(A + i));
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " ������� �������: "; cin >> (*(B + i));
    }
    for (int i = 0; i < n; i++)
    {
        if (*(A + i) < (*(B + i)))
        {
            min++;
        }
        else {
            if (*(A + i) == (*(B + i))) {
                ravn++;
            }
            else
                more++;
        }
    }
    cout << "A[k] = B[k]: " << ravn << endl;
    cout << "A[k] < B[k]: " << min << endl;
    cout << "A[k] > B[k]: " << more << endl;
}