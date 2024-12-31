#include <iostream>
#include <clocale>
#include <cctype>
#include <Windows.h>
#include "process.hpp"


using namespace std;

void osn() {
    setlocale(LC_CTYPE, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char choice;
    char character;
    int n;
    

    while (true) {
        cout << "Выберите вариант использования:" << endl;
        cout << "1 - Определение разницыв ASCII" << endl;
        cout << "2 - Определение разницы в Windows-1251" << endl;
        cout << "3 - Вывод кода символа, соответствующего цифре" << endl;
        cout << "4 - Выход из программы" << endl;

        cout << "Введите номер варианта (1-4): ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "Сколько символов вы хотите ввести? ";
            cin >> n;
            if (!cin) {
                cout << "Некорректный ввод";
                return;
            }
           
            
                for (int i = 1; i <= n; i++) {
                    cout << "Введите символ латинского алфавита: ";                
                    cin >> character;
                    calculateASCIIDifference(character);
                }
          

            
            break;
           
        case '2':
            cout << "Сколько символов вы хотите ввести? ";
           
            cin >> n;
            if (!cin) {
                cout << "Некорректный ввод";
                return;
            }
            for (int i = 1; i <= n; i++) {
                cout << "Введите символ русского алфавита: ";
                cin >> character;
                calculateWindows1251Difference(character);
            }
            break;
        case '3':
            cout << "Сколько символов вы хотите ввести? ";
           
            cin >> n;
            if (!cin) {
                cout << "Некорректный ввод";
                return;
            }
            for (int i = 1; i <= n; i++) {
                cout << "Введите цифру: ";
                cin >> character;
                printCharacterCode(character);
            }
            break;
        case '4':
            cout << "Программа завершена." << endl;
            return;
        default:
            cout << "Ошибка: Введен неверный номер варианта. Попробуйте еще раз." << endl;
            break;
        }
    }

 
}