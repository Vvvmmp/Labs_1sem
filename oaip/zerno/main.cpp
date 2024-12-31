#include <iostream>
#include <clocale>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

const int kMaxRows = 8;
const int kMaxColumns = 8;


// Функция для обмена строк матрицы
void swapRows(int matrix[kMaxRows][kMaxColumns], int a, int b, int n) {
    // проверяем, что a и b в пределах допустимых индексов строк
    if (a >= 0 && a < kMaxRows && b >= 0 && b < kMaxRows) {
        // меняем местами элементы каждой строки
        for (int i = 0; i < n; ++i) {
            matrix[a][i] = abs(matrix[a][i]);  // заменяем отрицательные элементы на их абсолютные значения
        }
    }
    else {
        cout << "Ошибка: Недопустимые значения a или b." << endl;
    }
}
// Функция для проверки, оканчивается ли слово на заданное окончание
bool endsWith(const string& word, const string& suffix) {
    return word.size() >= suffix.size() &&
        word.compare(word.size() - suffix.size(), suffix.size(), suffix) == 0;
}
// Функция для обработки предложения и вывода слов, оканчивающихся на заданное окончание
void processSentence(const string& sentence, const string& targetSuffix) {
    vector<string> words;

    // Создаем строковый поток для разбиения предложения на слова
    istringstream iss(sentence);
    string word;

    // Разбиваем предложение на слова
    while (iss >> word) {
        words.push_back(word);
    }
    cout << "Слова с окончанием '" << targetSuffix << "':" << endl;

    // Проходим по каждому слову в векторе.
    for (const string& word : words) {
        // Проверяем, оканчивается ли слово на заданное окончание.
        if (endsWith(word, targetSuffix)) {
            // Если окончание совпадает, выводим это слово.
            cout << word << endl;
        }
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    int choice;

    do {
        cout << "Выберите задачу, которую будем решать" << endl;
        cout << "1 - В матрице A[k, n], k <= 12, n <= 8 поменять местами строку, содержащую элемент а со строкой, содержащей элемент b.." << endl;
        cout << "2 - Дано предложение. Составить программу, которая выводит все слова, оканчивающиеся на -ая." << endl;
        cout << "3 - выход" << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            // Ввод размеров массива
            int k, n;
            // Определение максимальных размеров для матрицы
            const int kMaxRows = 12;
            const int kMaxColumns = 8;
            cout << "Введите количество строк (k <= " << kMaxRows << "): ";
            cin >> k;

            cout << "Введите количество столбцов (n <= " << kMaxColumns << "): ";
            cin >> n;

            // проверяем, что введенные размеры соответствуют допустимым
            if (k <= kMaxRows && n <= kMaxColumns) {
                int A[kMaxRows][kMaxColumns] = {
                    {1, -2, 3, -4, 5, -6, 7, -8},
                    {9, -10, 11, -12, 13, -14, 15, -16},
                    {17, -18, 19, -20, 21, -22, 23, -24},
                    // ... (остальные строки матрицы)
                };

                int a, b;

                cout << "Введите элемент a: ";
                cin >> a;

                cout << "Введите элемент b: ";
                cin >> b;

                //вызываем функцию для обмена строк
                swapRows(A, a, b, n);
                // выводим результат
                for (int i = 0; i < k; ++i) {
                    for (int j = 0; j < n; ++j) {
                        cout << A[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            else {
                cout << "Ошибка: Недопустимые размеры матрицы." << endl;
            }
            break;
        }
        case 2: {
            string sentence;

            string targetSuffix;

            cout << "Введите предложение: \n";
            std::cin.ignore();

            std::getline(cin, sentence);

            cout << "Введите окончание для поиска: ";
            std::cin.ignore();
            cin >> targetSuffix;
            processSentence(sentence, targetSuffix);
            break;
        }

        case 3: { // если пользователь выбрал выход, то прерываем программу
            break;
        }
        }
    } while (choice != 3);

    return 0;
}