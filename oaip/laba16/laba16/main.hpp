#include <iostream>
#include <sstream>
#include <string>


using namespace std;

void main1() {
    int n, repeat = 0;
    cout << "¬ведите n: ";
    cin >> n;
    int** array = new int* [n];

    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = rand() % 9 + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool duplicateFound = false;

            for (int l = 0; l < n; l++) {
                if (array[i][j] == array[i][l] && l != j) {
                    duplicateFound = true;
                    break;
                }
            }

            if (!duplicateFound) {
                array[i][j] = 0;
            }
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;
}

bool check_palindrome(const std::string& word) {
    int len = word.length();
    for (int i = 0; i < len / 2; ++i) {
        if (word[i] != word[len - i - 1]) {
            return false;
        }
    }
    return true;
}

void main2() {
    string str;
    cout << "¬ведите строку из слов: ";
    getline(std::cin >> ws, str);

    istringstream iss(str);
    string word;

    while (iss >> word) {
        if (check_palindrome(word)) {
            cout << word << endl;
        }
    }
}

