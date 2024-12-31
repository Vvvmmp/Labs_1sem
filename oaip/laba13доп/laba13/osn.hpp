#include <iostream>


using namespace std;

void osn1() {
    const int sz = 20;

    char* str = new char[sz];
    char* str1 = new char[sz * 2];  

    cout << "Введите строку: ";
    cin >> str;

    int j = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '*') {
            str1[j++] = str[i];
            str1[j++] = str[i];
        }
    }

    str1[j] = '\0';

    cout << "Строка без * и с повторением символов: " << str1 << endl;

    delete[] str;
    delete[] str1;
}

void osn2() {
    const int sz = 20;
    int min = INT_MAX;
    int length = 0, numberword = 1, minword = 0;
    char* str = new char[sz];


    cout << "Введите строку: ";
    cin.getline(str, sz);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {
            length++;
        }
        else {
            if (length > 0 && length < min) {
                min = length;
                minword = numberword;
            }
            length = 0;
            numberword++;
        }
    }

    
    if (length > 0 && length < min) {
        min = length;
        minword = numberword;
    }

    cout << "Минимальная длина слова: " << min << ", Номер слова: " << minword << endl;

    delete[] str;
}
