#include <iostream>
#include <clocale>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

const int kMaxRows = 8;
const int kMaxColumns = 8;


// ������� ��� ������ ����� �������
void swapRows(int matrix[kMaxRows][kMaxColumns], int a, int b, int n) {
    // ���������, ��� a � b � �������� ���������� �������� �����
    if (a >= 0 && a < kMaxRows && b >= 0 && b < kMaxRows) {
        // ������ ������� �������� ������ ������
        for (int i = 0; i < n; ++i) {
            matrix[a][i] = abs(matrix[a][i]);  // �������� ������������� �������� �� �� ���������� ��������
        }
    }
    else {
        cout << "������: ������������ �������� a ��� b." << endl;
    }
}
// ������� ��� ��������, ������������ �� ����� �� �������� ���������
bool endsWith(const string& word, const string& suffix) {
    return word.size() >= suffix.size() &&
        word.compare(word.size() - suffix.size(), suffix.size(), suffix) == 0;
}
// ������� ��� ��������� ����������� � ������ ����, �������������� �� �������� ���������
void processSentence(const string& sentence, const string& targetSuffix) {
    vector<string> words;

    // ������� ��������� ����� ��� ��������� ����������� �� �����
    istringstream iss(sentence);
    string word;

    // ��������� ����������� �� �����
    while (iss >> word) {
        words.push_back(word);
    }
    cout << "����� � ���������� '" << targetSuffix << "':" << endl;

    // �������� �� ������� ����� � �������.
    for (const string& word : words) {
        // ���������, ������������ �� ����� �� �������� ���������.
        if (endsWith(word, targetSuffix)) {
            // ���� ��������� ���������, ������� ��� �����.
            cout << word << endl;
        }
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    int choice;

    do {
        cout << "�������� ������, ������� ����� ������" << endl;
        cout << "1 - � ������� A[k, n], k <= 12, n <= 8 �������� ������� ������, ���������� ������� � �� �������, ���������� ������� b.." << endl;
        cout << "2 - ���� �����������. ��������� ���������, ������� ������� ��� �����, �������������� �� -��." << endl;
        cout << "3 - �����" << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            // ���� �������� �������
            int k, n;
            // ����������� ������������ �������� ��� �������
            const int kMaxRows = 12;
            const int kMaxColumns = 8;
            cout << "������� ���������� ����� (k <= " << kMaxRows << "): ";
            cin >> k;

            cout << "������� ���������� �������� (n <= " << kMaxColumns << "): ";
            cin >> n;

            // ���������, ��� ��������� ������� ������������� ����������
            if (k <= kMaxRows && n <= kMaxColumns) {
                int A[kMaxRows][kMaxColumns] = {
                    {1, -2, 3, -4, 5, -6, 7, -8},
                    {9, -10, 11, -12, 13, -14, 15, -16},
                    {17, -18, 19, -20, 21, -22, 23, -24},
                    // ... (��������� ������ �������)
                };

                int a, b;

                cout << "������� ������� a: ";
                cin >> a;

                cout << "������� ������� b: ";
                cin >> b;

                //�������� ������� ��� ������ �����
                swapRows(A, a, b, n);
                // ������� ���������
                for (int i = 0; i < k; ++i) {
                    for (int j = 0; j < n; ++j) {
                        cout << A[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            else {
                cout << "������: ������������ ������� �������." << endl;
            }
            break;
        }
        case 2: {
            string sentence;

            string targetSuffix;

            cout << "������� �����������: \n";
            std::cin.ignore();

            std::getline(cin, sentence);

            cout << "������� ��������� ��� ������: ";
            std::cin.ignore();
            cin >> targetSuffix;
            processSentence(sentence, targetSuffix);
            break;
        }

        case 3: { // ���� ������������ ������ �����, �� ��������� ���������
            break;
        }
        }
    } while (choice != 3);

    return 0;
}