#include <iostream>

using namespace std;

static void dop1() {
	setlocale(LC_CTYPE, "Russian");
	cout << "¬ведите 3 числа:";
	int a, b, c, sum, k = 0;
	cin >> a >> b >> c;
	sum = 0;
	(a % 5 == 0 ? sum +=a, k++: 0) + (b % 5 == 0 ? sum += b, k ++  : 0) + (c % 5 == 0 ? sum += c, k ++ : 0);
	!k ? cout << "Error" : cout << sum;
}