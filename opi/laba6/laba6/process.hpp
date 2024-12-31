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
        cout << "Вывод разницы " << difference << endl;
    }
    else {
        cout << "Символ не явл. буквой лат.алф." << endl;
    }
}

void calculateWindows1251Difference(char character) {
    if (character >= static_cast<char>('А') && character <= static_cast <char>('я')) {
        int uppercaseCode = toupper(character);
        int lowercaseCode = tolower(character);
        int difference = abs(uppercaseCode - lowercaseCode);
        cout << "Вывод разницы " << difference << endl;
    }
    else {
        cout << "Символ не явл. буквой рус.алф." << endl;
    }
}

void printCharacterCode(char character) {
    if (isdigit(character)) {
        int code = static_cast<int>(character);
        cout << "Код символа '" << character << "': " << code << endl;
    }
    else {
        cout << "Символ не явл. цифрой" << endl;
    }
}