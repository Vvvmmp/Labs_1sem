
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(0, "");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* X = new int[n];
    cout << "\nИсходный массив: \t";
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
    cout << "\nСреднее арифметическое= \t" << summ;
    
    cout << "\n1 половина массива(<ср.арифм.): \t";
    for (int i = 0; i < n; i++) {
        if (*(X + i) < summ) {
            cout << *(X + i) << ' ';
        }
    }

    cout << "\n2 половина массива(>ср.арифм.): \t";
    for (int i = 0; i < n; i++) {
        if (*(X + i) > summ) {
            cout << *(X + i) << ' ';
        }
    }
  
    

    delete[] X;

    return 0;
}


