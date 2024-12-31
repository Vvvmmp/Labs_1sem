#include <iostream>
#include <windows.h>

using namespace std;


void dop1() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char string[] = " облака речка озеро город окно колесо ";
	char string_with_words_ending[30];
	char ending;
	bool active = false;
	cout << "¬ведите окончание: "; cin >> ending;
	for (int i = strlen(string) - 1, word = 0, letter = 0; i > -1; i -= word + 1, word = 0) {
		if (string[i] == ending && string[i + 1] == ' ') {
			for (int j = i; string[j] != ' '; j--)
				word++;
			for (int j = i - word + 1; j <= i; j++, letter++) {
				string_with_words_ending[letter] = string[j];
				if (j == i)
					string_with_words_ending[++letter] = ' ';
			}
			for (int j = i - word; j > -1; j--) {
				if (string[j] == ending && string[j + 1] == ' ') {
					active = false;
					break;
				}
				else
					active = true;
			}
		}
		if (active) {
			string_with_words_ending[letter] = '\0'; 
			break;
		}
	}
	cout << string_with_words_ending;
	SetConsoleCP(866);
}



void dop4() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char string[] = "HOW DO YOU DO";
	int word = 0, letter = 0;
	char string_with_change[25];
	for (int i = 0, letterNum = 0; i < strlen(string); i += letter + 1, letter = 0) {
		for (int j = i; ; j++) {
			letter++;
			if (string[j + 1] == ' ' || string[j + 1] == '\0') {
				word++;
				break;
			}
		}
		if (word % 2 == 1)
			continue;
		else
			for (int j = i + letter - 1; j >= i; j--, letterNum++) {
				string_with_change[letterNum] = string[j];
				if (letter - 1 == letterNum)
					string_with_change[++letterNum] = ' ';
			}
		if (word == 4) {
			string_with_change[letterNum] = '\0';
		}
	}
	cout << string_with_change;
	SetConsoleCP(866);
}



void dop3() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char string[] = "завтра € поеду завтра домой, поэтому € очень рад, что завтра уже буду дома";
	char word[10], words_for_equal[10];
	bool active = false;
	cout << "Ќачальна€ строка: " << string;
	for (int i = 0, letter = 0, letterForEquals = 0; i < strlen(string); i += letter + 1, letter = 0) { 
		for (int j = i; ; j++) {
			word[letter] = string[j];
			letter++;
			if (string[j + 1] == ' ' || string[j + 1] == '\0') {
				word[letter++] = '\0';
				break;
			}
		}
		for (int j = i + letter--; j < strlen(string); j++) {
			if (string[j] == ' ' || string[j + 1] == '\0' || string[j] == ',') {
				if (letter != letterForEquals) {
					letterForEquals = 0;
					
					continue;
				}
				for (int k = 0; k < letter; k++) { 
					if (word[k] == words_for_equal[k])
						active = true;
					else {
						active = false;
						break;
					}
				}
				if (active) {
					for (int k = j - letter; k < j; k++) { 
						string[k + 1] = ' ';
						string[k] = string[k + 1];
					}
					words_for_equal[letterForEquals] = '\0';
					letterForEquals = 0;
				}
			}
			words_for_equal[letterForEquals] = string[j];
			letterForEquals++;
			if (string[j + 1] == ' ' || string[j + 1] == '\0' || string[j + 1] == ',')
				words_for_equal[letterForEquals] = '\0';
			if (i > strlen(string) - 8)
				cout << "Hello";
		}
	}
	cout << endl << string << endl;
	SetConsoleCP(866);
	system("pause");
}