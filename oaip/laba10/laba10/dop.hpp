#include <iostream>

using namespace std;




void dop1() {
    const int n = 14; 
    int izm[n];


    for (int i = 0; i < n; i++) {
        cout << "������� ���������� ������� ��� ��� " << i + 1 << ": ";
        cin >> izm[i];
    }

    const int days = 7;
    int maxvalue = 0;
    int weekWithmaxvalue = 0;

    for (int i = 0; i <= n - days; i += days) {
        int weeklyRainfall = 0;
        for (int j = i; j < i + days; j++) {
            weeklyRainfall += izm[j];
        }

        if (weeklyRainfall > maxvalue) {
            maxvalue = weeklyRainfall;
            weekWithmaxvalue = i / days + 1;
        }
    }

    cout << "���������� ���������� ������� ������ � ������: " << weekWithmaxvalue << endl;
}
void dop2() {
    const int size = 100;
    int value = 0, mas[size], n, x;
    cout << "������� ����������� �������(�� ����� 100) "; cin >> n;
    if (n > 100)
        cout << "�� ����� ������������ �����";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "������� " << i + 1 << " ������� �������: "; cin >> x;
            mas[i] = x;
        }
        for (int i = 0; i < n - 1; i++)
            if (mas[i] == mas[i + 1])
                value++;
        cout << "���������� ���: " << value;
    }
}

void dop3() {
    const int size = 100;
    int value = 0, maxval = 0, mas[size], n, x;
    cout << "������� ����������� �������(�� ����� 100) "; cin >> n;
    if (n > 100)
        cout << "�� ����� ������������ �����";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "������� " << i + 1 << " ������� �������: "; cin >> x;
            mas[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            if (mas[i] == mas[i - 1])
            {
                value++;
                if (value > maxval) {
                    maxval = value;
                }
            }
            else
            {
                value = 1;
            }
        }
        cout << "����������: " << maxval;
    }
}