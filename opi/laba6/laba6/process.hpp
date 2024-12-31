#include <iostream>
#include <clocale>
#include <cctype>
#include <Windows.h>

using namespace std;

void calculateASCIIDifference(char character) {

    setlocale(LC_CTYPE, "Russian");

    if (isalpha(character) && isascii(character)) {
        int uppercaseCode = toupper(character);
        int lowercaseCode = tolower(character);
        int difference = abs(uppercaseCode - lowercaseCode);
        cout << "����� ������� " << difference << endl;
    }
    else {
        cout << "������ �� ���. ������ ���.���." << endl;
    }
}

void calculateWindows1251Difference(char character) {
    if (character >= static_cast<char>('�') && character <= static_cast <char>('�')) {
        int uppercaseCode = toupper(character);
        int lowercaseCode = tolower(character);
        int difference = abs(uppercaseCode - lowercaseCode);
        cout << "����� ������� " << difference << endl;
    }
    else {
        cout << "������ �� ���. ������ ���.���." << endl;
    }
}

void printCharacterCode(char character) {
    if (isdigit(character)) {
        int code = static_cast<int>(character);
        cout << "��� ������� '" << character << "': " << code << endl;
    }
    else {
        cout << "������ �� ���. ������" << endl;
    }
}