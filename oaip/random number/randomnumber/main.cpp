#include <iostream>
#include <iomanip> // библиотека для форматированного вывода
#include <thread>


using namespace std;
// функция, которая считает секунды от n времени к 0
void countdown(int seconds) {
    for (int i = seconds; i >= 0; --i) {
        int hours = i / 3600;
        int minutes = (i % 3600) / 60;
        int remainingSeconds = i % 60;

        // вывод времени в формате "чч:мм:сс"
        cout << "\r" << setw(2) << setfill('0') << hours << ":" //для таймера, использование \r позволяет обновлять выводимую информацию на одной и той же строке в консоли
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << remainingSeconds << " осталось";
        this_thread::sleep_for(chrono::seconds(1)); // приостанавливает выполнение программы на 1 секунду.
    }
    cout << "\rВремя вышло!          " << endl;
}

// обратная функции countdown(от 0 к n)
void timer(int seconds) {
    for (int i = 0; i <= seconds; ++i) {
        int hours = i / 3600;
        int minutes = (i % 3600) / 60;
        int inputSeconds = i % 60;

        cout << "\r" << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << inputSeconds << " прошло";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\rВремя достигнуто!          " << endl;
}

int main() {
    setlocale(0, "");
    int choice;
    cout << "Выберите режим таймера:" << endl;
    cout << "1. Обратный отсчет" << endl;
    cout << "2. Прямой отсчет" << endl;
    cout << "Введите номер режима (1-2): ";
    cin >> choice;

    if (choice == 1) {
        int initialSeconds;
        cout << "Введите количество секунд: ";
        cin >> initialSeconds;
        countdown(initialSeconds);
    }
    else if (choice == 2) {
        int inputSeconds;
        cout << "Введите количество секунд для прямого отсчета: ";
        cin >> inputSeconds;

        timer(inputSeconds);
    }
    else {
        cout << "Некорректный выбор." << endl;
    }

    return 0;
}
