#include <iostream>
#include <iomanip> // ���������� ��� ���������������� ������
#include <thread>


using namespace std;
// �������, ������� ������� ������� �� n ������� � 0
void countdown(int seconds) {
    for (int i = seconds; i >= 0; --i) {
        int hours = i / 3600;
        int minutes = (i % 3600) / 60;
        int remainingSeconds = i % 60;

        // ����� ������� � ������� "��:��:��"
        cout << "\r" << setw(2) << setfill('0') << hours << ":" //��� �������, ������������� \r ��������� ��������� ��������� ���������� �� ����� � ��� �� ������ � �������
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << remainingSeconds << " ��������";
        this_thread::sleep_for(chrono::seconds(1)); // ���������������� ���������� ��������� �� 1 �������.
    }
    cout << "\r����� �����!          " << endl;
}

// �������� ������� countdown(�� 0 � n)
void timer(int seconds) {
    for (int i = 0; i <= seconds; ++i) {
        int hours = i / 3600;
        int minutes = (i % 3600) / 60;
        int inputSeconds = i % 60;

        cout << "\r" << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << inputSeconds << " ������";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\r����� ����������!          " << endl;
}

int main() {
    setlocale(0, "");
    int choice;
    cout << "�������� ����� �������:" << endl;
    cout << "1. �������� ������" << endl;
    cout << "2. ������ ������" << endl;
    cout << "������� ����� ������ (1-2): ";
    cin >> choice;

    if (choice == 1) {
        int initialSeconds;
        cout << "������� ���������� ������: ";
        cin >> initialSeconds;
        countdown(initialSeconds);
    }
    else if (choice == 2) {
        int inputSeconds;
        cout << "������� ���������� ������ ��� ������� �������: ";
        cin >> inputSeconds;

        timer(inputSeconds);
    }
    else {
        cout << "������������ �����." << endl;
    }

    return 0;
}
