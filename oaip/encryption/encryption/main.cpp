
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(0, "");
    int n;
    cout << "������� ������ �������: ";
    cin >> n;

    int* X = new int[n];
    cout << "\n�������� ������: \t";
    for (int i = 0; i < n; i++) {
        *(X + i) = rand() % 15;
        cout << *(X + i) << ' ';
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(X + i);
    }
    int summ = 0;
    summ = sum / n;
    cout << "\n������� ��������������= \t" << summ;
    
    cout << "\n1 �������� �������(<��.�����.): \t";
    for (int i = 0; i < n; i++) {
        if (*(X + i) < summ) {
            cout << *(X + i) << ' ';
        }
    }

    cout << "\n2 �������� �������(>��.�����.): \t";
    for (int i = 0; i < n; i++) {
        if (*(X + i) > summ) {
            cout << *(X + i) << ' ';
        }
    }
  
    

    delete[] X;

    return 0;
}


