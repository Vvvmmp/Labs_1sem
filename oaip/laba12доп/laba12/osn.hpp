#include <iostream>

using namespace std;

void osn1() {
    int n, num=0;

    cout << "Введите размерность массива: "; 
    cin >> n;

    int* A = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " элемент массива: "; 
        cin >> *(A + i);
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(A + i) << ' ';
    }

    for (int i = 0, j = 0; i < n; i++){
        if (*(A + i) < 0) {
            swap(*(A + i), *(A + j));
            j++;
        }
    }
    cout << "\nИтоговый массив: ";
    for (int i = 0; i < n; i++) {
        cout << *(A + i) << ' ';
    }

    delete[] A;
}









void findSum(float* s, int n1, float* d, int n2, float f) {
    float closestSum = FLT_MAX;
    float* sPtr = s;
    float* dPtr = d;

    while (sPtr < s + n1) {
        while (dPtr < d + n2) {
            float currentSum = *sPtr + *dPtr;
            if (abs(currentSum - f) < abs(closestSum - f)) {
                closestSum = currentSum;
            }
            dPtr++;
        }
        dPtr = d;
        sPtr++;
    }

    cout << "Наиболее близкая сумма к " << f << ": " << closestSum << endl;
}

void osn2() {
    int n1 = 3;
    int n2 = 4;
    float s[] = { 1.5, 2.3, 3.7 };
    float d[] = { 1.25, 1.4, 2.2, 4.0 };
    float f = 5.0;
    
    cout << "s: \t";
    for (int j = 0; j < n1; j++) {
        cout << s[j] << " ";
    }

    cout << endl;

    cout << "d: \t";
    for (int j = 0; j < n2; j++) {
        cout << d[j] << " ";
    }

    cout << endl;

    findSum(s, n1, d, n2, f);
}