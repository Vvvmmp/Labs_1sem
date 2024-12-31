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
        cout << "�������� ������� �������������:" << endl;
        cout << "1 - ����������� �������� ASCII" << endl;
        cout << "2 - ����������� ������� � Windows-1251" << endl;
        cout << "3 - ����� ���� �������, ���������������� �����" << endl;
        cout << "4 - ����� �� ���������" << endl;

        cout << "������� ����� �������� (1-4): ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "������� �������� �� ������ ������? ";
            cin >> n;
            if (!cin) {
                cout << "������������ ����";
                return;
            }
           
            
                for (int i = 1; i <= n; i++) {
                    cout << "������� ������ ���������� ��������: ";                
                    cin >> character;
                    calculateASCIIDifference(character);
                }
          

            
            break;
           
        case '2':
            cout << "������� �������� �� ������ ������? ";
           
            cin >> n;
            if (!cin) {
                cout << "������������ ����";
                return;
            }
            for (int i = 1; i <= n; i++) {
                cout << "������� ������ �������� ��������: ";
                cin >> character;
                calculateWindows1251Difference(character);
            }
            break;
        case '3':
            cout << "������� �������� �� ������ ������? ";
           
            cin >> n;
            if (!cin) {
                cout << "������������ ����";
                return;
            }
            for (int i = 1; i <= n; i++) {
                cout << "������� �����: ";
                cin >> character;
                printCharacterCode(character);
            }
            break;
        case '4':
            cout << "��������� ���������." << endl;
            return;
        default:
            cout << "������: ������ �������� ����� ��������. ���������� ��� ���." << endl;
            break;
        }
    }

 
}